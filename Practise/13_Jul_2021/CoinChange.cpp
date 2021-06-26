//AIM : Number of ways to make sum using coins
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


int min(int a, int b) {return a > b ? b : a;}
int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int maxCoinCombination(vi a, int sum, int n)
{

	int dp[n + 1][sum + 1];		// dp[n][sum]

	// Base Casess
	loop(i, 0, n + 1)
	dp[i][0] = 1;
	loop(i, 1, sum + 1)
	dp[0][i] = 0;

	loop(i, 1, n + 1)
	{
		loop(j, 1, sum + 1)
		{
			if (a[i - 1] <= j)
			{
				dp[i][j] =  dp[i][j - a[i - 1]] + dp[i - 1][j];
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}

	}
	if (dp[n][sum] == 0) return -1;
	return dp[n][sum];
}


int32_t main() {
	FIO();
	int n, sum;
	cin >> n >> sum;
	vi coin(n);
	loop(i, 0, n)
	cin >> coin[i];

	cout << maxCoinCombination(coin, sum, n );


	return 0;
}



