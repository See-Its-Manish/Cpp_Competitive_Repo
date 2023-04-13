//Link   - https://www.codechef.com/JUNE21C/problems/OPTSET
//Author - manish1010
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
// const int N = 1e6 + 5;
// int dp[N][N];
void get_max_XOR(int n , int k, vi &xor_sequence)
{
	if (k == 1)
	{

		xor_sequence.pb(n);
		return;
	}
	int dp[n + 1][k + 1];
	loop(i, 0, n) dp[i][0] = 0;
	loop(i, 1, k) dp[0][i] = -1;
	loop(i, 1, n)
	{
		loop(j, 1, k)
		{
			dp[i][j] = max((i ^ dp[i - 1][j - 1]), dp[i - 1][j]);
		}
	}

	int i = n;
	int j = k;

	while (i > 0 && j > 0)
	{
		if ((i ^ dp[i - 1][j - 1]) >  dp[i - 1][j])
		{
			xor_sequence.pb(i);
			i--; j--;
		}

		else i--;
	}
	reverse(all(xor_sequence));
}


int main() {
	FIO();

	// Code Starts from here!

	int t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		vi xor_sequence;
		get_max_XOR(n, k , xor_sequence);
		print(xor_sequence);

	}


	return 0;
}



