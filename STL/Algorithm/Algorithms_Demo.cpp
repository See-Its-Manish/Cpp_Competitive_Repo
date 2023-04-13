//Link   -
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

	vector<int> v{4, 3, 2, 1, 5};
	sort(all(v));	// Container passed, Random-access iterator
	print(v);
	// unstable
	// intro sort-> hybrid (insertion, quick, heap)

	vector<int> v1 {4, 3, 2, 1, 5, 6, 7, 9, 10};
	partial_sort(v1.begin(), v1.begin() + 2,  v1.end());
	print(v1);


	vector<int> v2{4, 3, 2, 1, 5};
	cout << is_sorted(all(v2)) << endl;

	vector<int> b(v1.size() + v2.size());
	merge(all(v1), all(v1), b.begin());
	print(b);





	return 0;
}



