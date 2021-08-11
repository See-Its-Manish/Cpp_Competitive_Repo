//Link   -
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
#define vs                      vector<string>
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

// TC - O(logn)
// SC - O(1)
ld median(vi &a, vi &b) {
	// We will consider a as smaller vector. So if len(a) > len(b) then swap the vectors
	if (a.size() > b.size()) return median(b, a);

	ll x = a.size() , y = b.size();
	ll lb = 0, ub = x;

	while (lb <= ub) {

		ll mid = lb + (ub - lb) / 2;
		ll partitionx = mid;
		ll partitiony = ( (x + y + 1) / 2 ) - partitionx;

		// Calculating the Possible values
		ll maxLeftX  = (partitionx == 0) ?  INT_MIN : a[partitionx - 1];
		ll maxLeftY  = (partitiony == 0) ?  INT_MIN : b[partitiony - 1];
		ll minRightX = (partitionx == x) ?  INT_MAX : a[partitionx];
		ll minRightY = (partitiony == y) ?  INT_MAX : b[partitiony];

		if (maxLeftX < minRightY and maxLeftY < minRightX) {
			// Found Median
			if ( (x + y) % 2 == 0 )
				return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2.0;
			else
				return max(maxLeftY, maxLeftX);
		}
		else if (maxLeftX > minRightY)
			ub = partitionx - 1;
		else
			lb = partitionx + 1;
	}
	return -1;
}

int main() {
	FIO();

	// Code Starts from here!

	// When sum of x+y = odd
	vi a{1, 3, 8, 9, 15};
	vi b{7, 11, 18, 19, 21, 25};
	cout << median(a, b) << endl;

	//When sum of x+y = even
	vi A{2, 13, 17, 30, 45};
	vi B{1, 12, 15, 26, 38};
	cout << median(A, B) << endl;

	return 0;
}



