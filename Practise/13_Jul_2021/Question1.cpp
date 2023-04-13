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

struct Interval
{
	int start, end;
};

bool compareInterval(Interval i1, Interval i2)
{
	return (i1.start < i2.start);
}

int mergeIntervals(vector<Interval> &arr, stack<Interval> &s, int n)
{
	if (n <= 0)
		return -1;

	sort(all(arr), compareInterval);
	s.push(arr[0]);
	for (int i = 1 ; i < n; i++)
	{
		Interval top = s.top();


		if (top.end < arr[i].start)
			s.push(arr[i]);


		else if (top.end < arr[i].end)
		{
			top.end = arr[i].end;
			s.pop();
			s.push(top);
		}
	}

	return s.size();

}

int main() {
	FIO();

	// Code Starts from here!

	int t;
	cin >> t;
	// flush;
	while (t--)
	{
		// int n, k, f;
		// cin >> n >> k >> f;
		ll n;
		cin >> n;
		vector<Interval> I(n);
		loop(i, 0, n - 1) cin >> I[i].start >> I[i].end;
		stack<Interval> s;
		int m = mergeIntervals(I, s, I.size());
		ll tt = 0;

		loop(i, 0, m - 1)
		{
			Interval u = s.top();
			s.pop();
			cout << u.start << " " << u.end << endl;
		}
		cout << "Ended" << endl;

		// ll ct = f - tt;
		// if (ct >= k) cout << "YES" << endl;
		// else cout << "NO" << endl;
	}





	return 0;
}



