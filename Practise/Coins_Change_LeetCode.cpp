//LINK : https://leetcode.com/problems/coin-change/
#include<bits/stdc++.h>
using namespace std;

#define ff 				first
#define ss 				second
#define sort(v) 		sort(v.begin(),v.end(), greater<int>())
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


int minCoin(vi a, int sum, int n)
{
	int dp[n + 1][sum + 1];		// dp[n][sum]

	// Base Casess
	loop(i, 1, n + 1)
	dp[i][0] = 0;
	loop(i, 0, sum + 1)
	dp[0][i] = LLONG_MAX - 1;
	loop(i, 1, sum + 1)
	{
		if (i % a[0] == 0)
			dp[1][i] = i / a[0];
		else
			dp[1][i] = LLONG_MAX - 1;
	}
	loop(i, 2, n + 1)
	{
		loop(j, 1, sum + 1)
		{
			if (a[i - 1] <= j)
			{
				dp[i][j] =  min(1 + dp[i][j - a[i - 1]] , dp[i - 1][j]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}

	}
	if (dp[n][sum] == LLONG_MAX - 1) return -1;
	return dp[n][sum];
}


int32_t main() {
	FIO();

	int n, sum;
	cin >> n >> sum;
	vi a(n);
	loop(i, 0, n)
	{
		cin >> a[i];
	}
	cout << minCoin(a, sum, n);


	return 0;
}



