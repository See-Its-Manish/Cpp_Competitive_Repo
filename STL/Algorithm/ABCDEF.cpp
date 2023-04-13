//Link   - https://www.spoj.com/problems/ABCDEF/
//Author - seeitsmanish
#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #include<ext/pb_ds/trie_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define ff						first
#define ss						second
#define pb						emplace_back
#define ll						long long int
#define ld						long double
#define mod             		1000000007
#define vi  					vector<ll>
#define vii						vector<ll,ll>
#define pii 					pair<ll,ll>
#define ump						unordered_map<ll>
#define mp 						make_pair
#define pq_max	                priority_queue<ll>
#define pq_min					priority_queue<ll,vi,greater<ll>>
#define endl 					"\n"
#define flush					cin.get()
#define all(v)					v.begin(), v.end()
#define print(v) 				for(auto &n:v) cout<<n<<" "; cout<<endl
#define loop(i,s,e) 			for(auto i=s; i<=e; ++i)
#define mem(var,val)			memset(var,val,sizeof(var))
#define log(args...) 			{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a > b ? b : a;}
int __gcd(int a, int b) {return b == 0 ? a : __gcd(b, a % b);}
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




int main() {
	FIO();

	// Code Starts from here!

	int n;
	cin >> n;
	vi arr(n);

	loop(i, 0, n - 1) cin >> arr[i];

	vi lhs;
	vi rhs;

	loop(a, 0, n - 1)
	{
		loop(b, 0, n - 1)
		{
			loop(c, 0, n - 1)
			{
				lhs.pb(arr[a]*arr[b] + arr[c]);
			}
		}
	}

	loop(d, 0, n - 1)
	{
		loop(e, 0, n - 1)
		{
			loop(f, 0, n - 1)
			{
				if (arr[d] == 0)continue;
				rhs.pb((arr[f] + arr[e]) * arr[d]);
			}
		}
	}

	sort(all(rhs));
	int ans = 0;

	for (auto &i : lhs)
	{
		auto p = equal_range(all(rhs), i);
		ans += p.ss - p.ff;
	}

	cout << ans << endl;





	return 0;
}



