//Link   - https://www.codechef.com/START6C/problems/ETUP
//Author - seeitsmanish
#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #include<ext/pb_ds/trie_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define ff                      first
#define ss                      second
#define pb                      emplace_back
#define ll                      long long int
#define ld                      long double
#define mod                     1000000007
#define vi                      vector<ll>
#define vii                     vector<ll,ll>
#define vs                      vector<>string>
#define pii                     pair<ll,ll>
#define mii                     map<ll,ll>
#define ump                     unordered_map
#define mp                      make_pair
#define pq_max                  priority_queue<ll>
#define pq_min                  priority_queue<ll,vi,greater<ll>>
#define endl                    "\n"
#define flush                   cin.get()
#define all(v)                  v.begin(), v.end()
#define print(v)                for(auto &n:v) cout<<n<<" "; cout<<endl
#define printpair(v)            for(auto &it:v) cout<<it.ff<<" "<<it.ss<<endl; cout<<"Ended"<<endl;
#define loop(i,s,e)             for(auto i=s; i<=e; ++i)
#define looprev(i,s,e)          for(auto i=(s); i>=(e); --i)
#define mem(var,val)            memset(var,val,sizeof(var))
#define log(args...)            { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
ll max(ll a, ll b) {return a > b ? a : b;}
ll min(ll a, ll b) {return a > b ? b : a;}
ll __gcd(ll a, ll b) {return (b == 0) ? a : __gcd(b, a % b);}
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

	ll t;
	cin >> t;
	flush;
	while (t--)
	{
		ll n, q;
		cin >> n >> q;
		vi a(n + 1);
		loop(i, 1, n) cin >> a[i];

		vi odd(n + 1);
		odd[1] = (a[1] % 2 != 0) ? 1 : 0;
		vi even(n + 1);
		even[1] = (a[1] % 2 == 0) ? 1 : 0;
		loop(i, 2, n)
		{
			if (a[i] % 2 == 0)
			{
				even[i] = even[i - 1] + 1;
				odd[i] = odd[i - 1];
			}
			else
			{
				even[i] = even[i - 1];
				odd[i] = odd[i - 1] + 1;

			}

		}

		while (q--)
		{
			ll l, r;
			cin >> l >> r;

			if (r - l < 2)
			{
				cout << 0 << endl;
				continue;
			}

			ll n1 = odd[r] - odd[l - 1];
			ll n2 = even[r] - even[l - 1];

			ll ans = 0;

			ans = ((n1 * (n1 - 1) ) / 2.0) * n2  + (n2 * (n2 - 1) * (n2 - 2)) / 6.0 ;

			cout << ans << endl;
		}
	}


	return 0;
}



