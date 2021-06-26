//Link   - https://www.codechef.com/JUNE21C/problems/DAREA
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

	ll t;
	cin >> t;
	// flush;
	while (t--)
	{
		ll n;
		cin >> n;
		int x, y;

		if (n == 1)
		{
			cin >> x >> y;
			cout << 0 << endl;
			continue;
		}

		map<int, pair<int, int>> m;

		loop(i, 0, n - 1)
		{
			cin >> x >> y;

			if (m.count(x) == 0) m[x] = mp(y, y);
			else { auto &it = m[x]; it = mp(min(it.ff, y), max(it.ss, y));}
		}

		ll size = m.size();
		vi keys(size); ll key = 0;
		for (auto it = m.begin(); it != m.end(); it++) keys[key++] = it->ff;
		pii max_diff; max_diff.ff = INT_MIN;
		loop(i, 1, size)
		{
			ll diff = keys[i] - keys[i - 1];
			max_diff = (diff > max_diff.ff ) ? pii(diff, i) : max_diff;
		}
		ll k = max_diff.ss;
		ll max_y1 = m[keys[0]].ss;
		ll min_y1 = m[keys[0]].ff;
		loop(i, 1, k - 1)
		{
			max_y1 = max(max_y1, m[keys[i]].ss);
			min_y1 = min(min_y1, m[keys[i]].ff);
		}
		ll min_y2;
		ll max_y2;
		if (k < size - 1)
		{
			min_y2 = m[keys[k + 1]].ff;
			max_y2 = m[keys[k + 1]].ss;
		}
		else
		{
			min_y2 = m[keys[size - 1]].ff;
			max_y2 = m[keys[size - 1]].ss;
		}

		loop(i, k + 1, size - 1)
		{
			max_y2 = max(max_y2, m[keys[i]].ss);
			min_y2 = min(min_y2, m[keys[i]].ff);
		}
		// log(min_y1, max_y1, min_y2, max_y2);


		// cout << max_diff.ff << " " << max_diff.ss << endl;
		// Gives = Map is correctly formed
		// for (auto &it : m )
		// {
		// 	cout << "For x: " << it.ff << endl;
		// 	cout << "MIN and MAX y : " << it.ss.ff << " " << it.ss.ss << endl;
		// }


		ll x1 = keys[k - 1] - keys[0];
		ll x2 = keys[size - 1] - keys[k];
		ll y1 = max_y1 - min_y1;
		ll y2 = max_y2 - min_y1;
		ll area = x1 * y1 + x2 * y2;
		// log(x1, x2, y1, y2);
		cout << area << endl;

		loop(i, 1, size)
		{
			m[keys[i]]
		}
	}



	return 0;
}



