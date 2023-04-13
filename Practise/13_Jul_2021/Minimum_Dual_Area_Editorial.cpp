//Link   - https://www.codechef.com/JUNE21C/problems/DAREA
//Author - seeitsmanish
#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #include<ext/pb_ds/trie_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define x         				first
#define y						second
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
#define looprev(i,s,e) 			for(auto i=(s); i>=(e); i--)
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


ll compute(vector<pii> &a, ll n)
{
	sort(all(a));
	vi max_prefix(n);
	vi min_prefix(n);
	vi max_suffix(n);
	vi min_suffix(n);
	max_prefix[0] = min_prefix[0] = a[0].y;
	loop(i, 1, n - 1)
	{
		max_prefix[i] = max(max_prefix[i - 1], a[i].y);
		min_prefix[i] = min(min_prefix[i - 1], a[i].y);
	}
	max_suffix[n - 1] = min_suffix[n - 1] = a[n - 1].y;
	looprev(i, n - 2, 0)
	{
		max_suffix[i] = max(max_suffix[i + 1], a[i].y);
		min_suffix[i] = min(min_suffix[i + 1], a[i].y);
	}

	ll ans = LLONG_MAX;
	ll x1 = a[0].x;
	ll xn = a[n - 1].x;
	loop(i, 0, n - 2)
	{
		ll r1 = (a[i].x - x1) * (max_prefix[i] - min_prefix[i]);
		ll r2 =  (xn - a[i + 1].x) * (max_suffix[i + 1] - min_suffix[i + 1]);
		ans = min(ans, (r1 + r2));
	}
	return ans;
}

int main() {
	FIO();

	// Code Starts from here!

	ll t;
	cin >> t;
	// flush;
	while (t--)
	{
		ll n;
		cin >> n;
		vector<pii> a(n);
		loop(i, 0, n - 1) cin >> a[i].x >> a[i].y;

		if (n <= 2) {
			cout << "0\n";
		}
		else {


			// Calculating answer for x - coordinate
			ll ans1 = compute(a, n);
			// Calculating answer for y - coordinate
			loop(i, 0, n - 1)
			{
				ll temp = a[i].x;
				a[i].x = a[i].y;
				a[i].y = temp;
			}
			ll ans2 = compute(a, n);

			cout << min(ans1, ans2) << "\n";
		}
	}


	return 0;
}



