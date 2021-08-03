//AIM    - Basic Implementation of Trie data structure
//Author - seeitsmanish
#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #include<ext/pb_ds/trie_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define ff          			first
#define ss						second
#define pb						emplace_back
#define ll						long long int
#define ld						long double
#define mod             		1000000007
#define vi  					vector<ll>
#define vii						vector<ll,ll>
#define vs						vector<>string>
#define pii 					pair<ll,ll>
#define mii						map<ll,ll>
#define ump						unordered_map
#define mp 						make_pair
#define pq_map                  priority_queue<ll>
#define pq_min      			priority_queue<ll,vi,greater<ll>>
#define endl        			"\n"
#define flush       			cin.get()
#define all(v)      			v.begin(), v.end()
#define print(v)    			for(auto &n:v) cout<<n<<" "; cout<<endl
#define printpair(v)			for(auto &it:v) cout<<it.ff<<" "<<it.ss<<endl; cout<<"Ended"<<endl;
#define loop(i,s,e) 			for(auto i=s; i<=e; ++i)
#define looprev(i,s,e)			for(autu i=(s); i>=(e); --i)
#define mem(var,val)			memset(var,val,sizeof(var))
#define log(args...)			{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
ll max(ll a, ll b) {return a > b ? a : b;}
ll min(ll a, ll b) {return a > b ? b : a;}
ll __gcd(ll a, ll b) {return b == 0 ? a : __gcd(b, a % b);}
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cout << *it << " = " << a << endl;
	err(++it, args...);
}
void FIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// typedef trie<string, null_type, trie_string_access_traits<>, pat_trie_tag, trie_prefix_search_node_update> pbtrie;

class Node {
public:
	char data;
	bool isTerminal;
	ump<char, Node*> children;

	Node(char ch): data(ch), isTerminal(false) {};
};

class Trie {
public:
	Node* root = new Node('\0');

	void insert(string str)
	{
		Node* temp = root;
		loop(i, 0, str.size() - 1)
		{
			char ch = str[i];
			if (temp->children.count(ch)) temp = temp->children[ch];
			else
			{
				Node* n = new Node(ch);
				temp->children[ch] = n;
				temp = n;
			}
		}
		temp->isTerminal = true;
		return;
	}

	bool search(string str)
	{
		Node *temp = root;
		loop(i, 0, str.size() - 1)
		{
			char ch = str[i];
			if (temp->children.count(ch)) temp = temp->children[ch];
			else
			{
				return false;
			}
		}

		return (temp->isTerminal == true);
	}

	void helperDFS(Node* root, string str, string osf)
	{
		if (root == nullptr) return;

		if (root->isTerminal) cout << str + osf << endl;

		for (auto ch : root->children)
		{
			helperDFS(ch.ss, str, osf + ch.ff);
		}
	}

	void printPrefix(string prefix)
	{
		Node* temp = root;
		cout << "Prefixes with " << prefix << " are :" << endl;
		loop(i, 0, prefix.size() - 1)
		{
			char ch = prefix[i];
			if (temp->children.count(ch)) temp = temp->children[ch];
			else
			{
				cout << "The prefix " << prefix << " doesn't exist" << endl;
				return;
			}
		}

		helperDFS(temp, prefix, "");
	}

};

int main() {
	FIO();

	// Code Starts from here!

	ll t;
	cin >> t;
	flush;
	Trie tr;
	while (t--)
	{
		string str;
		cin >> str;
		tr.insert(str);
	}
	ll q;
	cin >> q;
	flush;
	while (q--)
	{
		string str;
		getline(cin, str);
		if (tr.search(str)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	ll p;
	cin >> p;
	flush;
	while (p--)
	{
		string prefix;
		getline(cin, prefix);
		tr.printPrefix(prefix);
	}


	return 0;
}





