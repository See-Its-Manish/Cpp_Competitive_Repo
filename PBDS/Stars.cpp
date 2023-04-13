/*
Link   -
Author - seeitsmanish
*/
#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/trie_policy.hpp>
using namespace __gnu_pbds;

#define x    			first
#define y				second
#define pb				emplace_back
#define int				long long int
#define ld				long double
#define vi  			vector<int>
#define vii				vector<int,int>
#define endl 			"\n"
#define flush			cin.get()
#define all(v)			v.begin(), v.end()
#define print(v) 		for(auto &n:v) cout<<n<<" "
#define loop(i,s,e) 	for(auto i=s; i<=e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))


int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a > b ? b : a;}
int __gcd(int a, int b) {return b == 0 ? a : __gcd(b, a % b);}

void FIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

}
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// typedef trie<string, null_type, trie_string_access_traits<>, pat_trie_tag, trie_prefix_search_node_update> pbtrie;




int32_t main() {
	FIO();

	// Code Starts from here!

	pbds arr;

	int n;
	cin >> n;
	int x, y;
	loop(i, 0, n)
	{
		cin >> x >> y;
		arr.insert({x, y});
	}

	vi level_stars(n, 0);

	for (auto &it : arr)
	{
		level_stars[arr.order_of_key(*\it)]++;
	}

	loop(i, 0, n)
	{
		cout << level_stars[i] << endl;
	}







	return 0;
}



