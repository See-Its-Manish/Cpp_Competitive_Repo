//Link   - https://www.codechef.com/problems/SNTEMPLE
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
#define mid(l,r)                l+(r-l)/2
#define all(v)                  v.begin(), v.end()
#define print(v)                for(auto &n:v) cout<<n<<" "; cout<<endl
#define printpair(v)            for(auto &it:v) cout<<it.ff<<" "<<it.ss<<endl; cout<<"Ended"<<endl;
#define loop(i,s,e)             for(auto i=s; i<=e; ++i)
#define looprev(i,s,e)          for(auto i=(s); i>=(e); --i)
#define mem(var,val)            memset(var,val,sizeof(var))
#define log(args...)            { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
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

ll find_peak(vi &arr) {
	ll lb = 0, ub = arr.size() - 1;
	while (lb < ub) {
		ll mid = lb + (ub - lb) / 2;
		if (arr[mid] < arr[mid + 1]) lb = mid + 1;
		else ub = mid;

	}
	return lb;
}

ll Lower_Bound(vi &arr, ll start, ll end, ll k) {
	ll lb = start, ub = end;
	ll ans = 0;
	while (lb <= ub) {
		ll mid = lb + (ub - lb) / 2;
		if (arr[mid] <= k)  {
			ans = mid;
			lb = mid + 1;
		} else ub = mid - 1;
	}
	return ans;
}
struct compare {
	bool operator()(const ll &a, const ll &b) const {
		return (a > b);
	}
};

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

		ll mid = find_peak(a);
		ll start = Lower_Bound(a, 0, mid, 1) ;
		ll end = lower_bound(a.begin() + mid, a.end(), 1, compare()) - a.begin();

		// log(start, mid, end);
		ll ans = 0;
		loop(i, 0, start - 1) ans += a[i];
		// log(ans);
		ll h = 1;
		loop(i, start, mid) {
			if (h < a[i]) ans += a[i] - h;
			h++;
		}
		// log(ans);
		h = a[mid] - 1;
		loop(i, mid + 1, end) {
			if (h < a[i]) ans += a[i] - h;
			h--;
		}
		// log(ans);
		loop(i, end + 1, n - 1) ans += a[i];
		// log(ans);
		cout << ans << endl;

	}





	return 0;
}



