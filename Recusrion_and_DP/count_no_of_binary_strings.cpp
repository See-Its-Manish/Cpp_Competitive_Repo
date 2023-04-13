//AIM    - To count number of binary strings without consecutive ones
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
#define mid(l,r)                (l+(r-l)/2)
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


ll count_binary_strings(ll n)
{
	if (n == 1 or n == 2) return n + 1;

	ll choice_of_0 = count_binary_strings(n - 1);
	ll choice_of_1 = count_binary_strings(n - 2);
	return choice_of_1 + choice_of_0;
}

ll print_binary_strings(ll n, string out)
{
	if (n == 1 or n == 2) {
		if (n == 1)
		{
			cout << "0" + out << endl;
			cout << "1" + out << endl;
		}
		if (n == 2)
		{
			cout << "00" + out << endl;
			cout << "10" + out << endl;
			cout << "01" + out << endl;
		}
		return n + 1;
	}

	ll choice_of_0 = print_binary_strings(n - 1, out + "0");
	ll choice_of_1 = print_binary_strings(n - 2, out + "01");
	return choice_of_1 + choice_of_0;
}

int main() {
	FIO();

	// Code Starts from here!

	// cout << count_binary_strings(3) << endl;
	// cout << count_binary_strings(4) << endl;
	print_binary_strings(3, "");


	return 0;
}



