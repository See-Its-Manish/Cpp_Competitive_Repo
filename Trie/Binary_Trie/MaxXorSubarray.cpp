//Link   - Given an array find maximum xor that can be obtained from the subarray
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
#define ump						unordered_map<ll>
#define mp 						make_pair
#define pq_map                  priority_queue<ll>
#define pq_min      			priority_queue<ll,vi,greater<ll>>
#define endl        			"\n"
#define flush       			cin.get()
#define all(v)      			v.begin(), v.end()
#define print(v)    			for(auto &n:v) cout<<n<<" "; cout<<endl
#define printpair(v)			for(auto &it:v) cout<<it.ff<<" "<<it.ss<<endl; cout<<"Ended"<<endl;
#define loop(i,s,e) 			for(auto i=s; i<=e; ++i)
#define looprev(i,s,e)			for(auto i=(s); i>=(e); --i)
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

class TrieNode {
public:
	TrieNode* left;
	TrieNode* right;
	TrieNode(): left(nullptr), right(nullptr) {};
};


void insert(TrieNode* head, ll n)
{

	TrieNode* curr = head;
	looprev(i, 31, 0)
	{

		int bit = (n >> i) & 1;
		if (bit == 0)
		{
			if (curr->left == NULL) curr->left = new TrieNode();
			curr = curr->left;
		}
		else if (bit == 1)
		{
			if (curr->right == NULL) curr->right = new TrieNode();
			curr = curr->right;
		}
	}
}

ll MaxXorPair(TrieNode* head, ll n)
{
	TrieNode* curr = head;
	ll val = 0;
	looprev(i, 31, 0)
	{
		int bit = (n >> i) & 1;
		if (bit == 0)
		{
			if (curr->right)
			{
				val += (1 << i);
				curr = curr->right;
			}
			else curr = curr->left;

		}
		else if (bit == 1)
		{
			if (curr->left)
			{
				val += (1 << i);
				curr = curr->left;
			}
			else curr = curr->right;
		}
	}

	return val;
}




int main() {
	FIO();

	// Code Starts from here!
	/*
		In this:-
		We have used a prefix_xor
		A = [a,b,c,d,e,f]
		B = [a, a^b, a^b^c, a^b^c^d, a^b^c^d^e, a^b^c^d^e^f]

		now for xor of subarrary A[2:4] = B[1] ^ B[4]

		Now, this way we can find xor of every subarray
		The Question is reduced to Max Xor Pair....!
	*/

	ll n;
	cin >> n;
	TrieNode* head = new TrieNode();
	ll max_xor = INT_MIN;
	ll curr_xor, x;
	loop(i, 0, n - 1)
	{
		cin >> x;
		if (i == 0)
		{
			insert(head, x);
			curr_xor = x;
			continue;
		}
		curr_xor = curr_xor ^ x;
		max_xor = max(max_xor, MaxXorPair(head, curr_xor));
		insert(head, x);
	}

	cout << max_xor << endl;





	return 0;
}



