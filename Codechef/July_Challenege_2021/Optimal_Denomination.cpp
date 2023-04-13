//Link   - https://www.codechef.com/JULY21C/problems/MINNOTES
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
		vi a(n);
		loop(i, 0, n - 1) cin >> a[i];

		ll min = INT_MAX;
		loop(i, 0, n - 1) min = ::min(min, a[i]);
		ll max_ind = 0;
		loop(i, 1, n - 1) max_ind = a[i] > a[max_ind] ? i : max_ind;
		vi index;
		loop(i, 0, n - 1)
		{
			if ((a[i] % min) != 0) index.pb(i);
		}

		ll size = index.size();
		ll base;
		if (size == 0)
		{
			base = min;
			a[max_ind] = min;
		}
		else if (size == 1)
		{
			a[index[0]] = min;
			base = min;
		}
		else
		{
			base = 1;
			a[max_ind] = min;
		}

		ll ans = 0;
		loop(i, 0, n - 1) ans += (a[i] / base);

		cout << ans << endl;
	}






	return 0;
}



