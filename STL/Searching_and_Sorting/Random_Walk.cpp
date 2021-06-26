/*
Link   - https://www.codechef.com/UAPRAC/problems/RNDWAEZ
Author - seeitsmanish
*/
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
#define print(v) 				for(auto &n:v) cout<<n<<" "
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
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// typedef trie<string, null_type, trie_string_access_traits<>, pat_trie_tag, trie_prefix_search_node_update> pbtrie;


ld find_dist(ld x1, ld x2, ld y1, ld y2)
{
	return sqrtl((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int32_t main() {
	FIO();

	// Code Starts from here!

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<ld> x(n);
		vector<ld> y(n);

		loop(i, 0, n - 1)
		{
			cin >> x[i] >> y[i];
		}
		ld qx, qy, rx, ry;
		cin >> qx >> qy >> rx >> ry;

		ld max_dist = find_dist(qx, rx, qy, ry);


		int idx = -1;
		loop(i, 0, n - 1)
		{
			if (x[i] == rx and y[i] == ry)
			{
				idx = i;
				break;
			}
		}
		if (idx != -1)
		{
			n--;
			x.erase(x.begin() + idx);
			y.erase(y.begin() + idx);
		}
		vi perm(n);

		ld valid_dist_count = 0.0;
		ld ans = 0.0;
		ld permcount = 0.0;

		loop(i, 0, n - 1) perm[i] = i;
		cout.precision(8);

		do {

			loop(i, 1, n - 1)
			{
				ans += find_dist(x[perm[i]], x[perm[i - 1]], y[perm[i]], y[perm[i - 1]]);
			}
			ans += find_dist(x[perm[0]], rx, y[perm[0]], ry);

			if (ans <= max_dist) valid_dist_count++;
			permcount++;
			ans = 0.0;
		} while (next_permutation(all(perm)));

		ld result = valid_dist_count / permcount;
		cout << fixed << result << endl;


	}






	return 0;
}



