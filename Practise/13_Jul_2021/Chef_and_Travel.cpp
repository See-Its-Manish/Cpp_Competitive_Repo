/*
Link   : https://www.codechef.com/problems/ITER6
Author : seeitsmanish
*/
#include<bits/stdc++.h>
using namespace std;

#define ff 				first
#define ss 				second
#define sort(v) 		sort(v.begin(),v.end())
#define print(v) 		for(auto n:v) cout<<n<<" "
#define rev(v) 			reverse(v.begin(), v.end())
#define int 			long long int
#define li 				long int
#define vi 				vector<int>
#define pb 				push_back
#define endl 			"\n"
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))


int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


void solve()
{
	int n;
	cin >> n;

	int b[n]; int t[n]; int a[n] ;
	mem(b, 1); mem(t, 0); mem(a, 0);

	for (int i = 0; i < n; i += 2)
		t[i] = 1;
	for (int i = 0; i < n; i += 3)
		a[i] = 1;

	int dp[n + 1];

	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 2;
	dp[4] = 3;

	loop(i, 5, n + 1)
	{
		dp[i] = 1 + dp[i - 1] + 1 + dp[i - 2] + 1 + dp[i - 3];
	}

	cout << dp[n] << endl;

}


int32_t main() {
	FIO();
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}



