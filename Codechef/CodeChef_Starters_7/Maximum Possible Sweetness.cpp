//Link   - https://www.codechef.com/START7C/problems/MAXSWT
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
#define vii                     vector<pair<ll,ll>>
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

ll recurse(vi &sweetness, vi &price, ll c, ll d, ll n)
{
	if (d == 0 or n == 0 or c == 0) return 0;

	if (price[n] <= d)
	{
		return max(sweetness[n] + recurse(sweetness, price, c - 1, d - price[n], n - 1), recurse(sweetness, price, c, d, n - 1));
	}
	else
	{
		return (recurse(sweetness, price, c, d, n - 1));
	}
}

struct compare {
	bool operator()(const pii &a, const pii &b) const {
		if (a.ss == b.ss) return (a.ff < b.ff);
		else return (a.ss > b.ss);
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
		ll n, d;
		cin >> n >> d;

		vii candy(n);
		loop(i, 0, n - 1) cin >> candy[i].ff;
		loop(i, 0, n - 1) cin >> candy[i].ss;

		sort(all(candy));

		multiset < pii, compare> mset;

		ll l = 0;
		ll ans = 0;
		looprev(r, n - 1, 0)
		{
			while ( l < r and candy[l].ff + candy[r].ff <= d)
				mset.insert(candy[l++]);

			auto it = mset.find(candy[r]);
			if ( l > r and it != mset.end()) mset.erase(candy[r]);
			auto [price1 , sweet1] = mset.empty() ? mp(0ll, 0ll) : *mset.begin();
			auto [price2 , sweet2] = candy[r];
			if (price1 + price2 <= d) ans = max(ans, sweet2 + sweet1);

		}

		cout << ans << endl;

	}





	return 0;
}



