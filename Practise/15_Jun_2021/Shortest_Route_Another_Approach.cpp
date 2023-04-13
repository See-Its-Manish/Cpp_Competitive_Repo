//Link   - https://www.codechef.com/submit/SHROUTE
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
#define looprev(i,s,e) 			for(auto i=s; i>=e; --i)
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




int main() {
	FIO();

	// Code Starts from here!

	int t;
	cin >> t;
	// flush;
	while (t--)
	{
		ll n, m;
		cin >> n >> m;
		vi a(n + 1);
		loop(i, 1, n) cin >> a[i];

		vi suffix(n + 1);
		ll current = INT_MAX;
		looprev(i, n, 1)
		{
			if (a[i] == 2) current = i;
			suffix[i] = current;
		}

		vi prefix(n + 1);
		current = INT_MAX;
		loop(i, 1, n)
		{
			if (a[i] == 1) current = i;
			prefix[i] = current;
		}

		while (m--)
		{
			ll b;
			cin >> b;

			if (a[b] > 0 or b == 1) cout << 0 << " ";
			else if (a[b] == 0)
			{
				ll dist1 = prefix[b] != INT_MAX ? b - prefix[b] : INT_MAX;
				ll dist2 = suffix[b] != INT_MAX ? suffix[b] - b : INT_MAX;
				ll ans = min(dist1, dist2);
				if (ans == INT_MAX) cout << -1 << " ";
				else cout << ans << " ";
			}
		}
		cout << endl;

	}





	return 0;
}



