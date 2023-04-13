//Link   - https://www.codechef.com/FEB21C/problems/TEAMNAME
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
#define vs						vector<string>
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
typedef trie<string, null_type, trie_string_access_traits<>, pat_trie_tag, trie_prefix_search_node_update> pbtrie;

class Node {
public:
	char data;
	bool isTerminal;
	Node* children[26];

	Node(char ch)
	{
		this->data = ch;
		this->isTerminal = 0;
		loop(i, 0, 25) this->children[i] = nullptr;
	}
};

class Trie {
public:
	Node* root = new Node('\0');

	void insert(string &str)
	{
		Node* temp = root;
		loop(i, 0, str.size() - 1)
		{
			ll ch = str[i] - 'a';
			if (temp->children[ch]) temp = temp->children[ch];
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

	bool search(string &str)
	{
		Node *temp = root;
		loop(i, 0, str.size() - 1)
		{
			char ch = str[i] - 'a';
			if (temp->children[ch]) temp = temp->children[ch];
			else
			{
				return false;
			}
		}

		return (temp->isTerminal == true);
	}

};



int main() {
	FIO();

	// Code Starts from here!

	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		flush;
		string str;
		vs s(n);
		loop(i, 0, n - 1) cin >> s[i];

		Trie tr;
		loop(i, 0, n - 1) tr.insert(s[i]);

		ll count = 0;
		loop(i, 0, n - 1)
		{
			loop(j, i + 1, n - 1)
			{
				string& s1 = s[i];
				string& s2 = s[j];

				if (s1[0] == s2[0]) continue;
				string n1 = s1[0] + s2.substr(1);
				string n2 = s2[0] + s1.substr(1);

				if (tr.search(n1) == 0 and tr.search(n2) == 0 )
				{
					count += 2;
				}

			}

		}

		cout << count << endl;

	}
	return 0;
}

