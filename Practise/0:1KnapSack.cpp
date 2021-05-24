//AIM : 0/1 KnapSack
#include<bits/stdc++.h>
using namespace std;

#define ff 			first
#define ss 			second
#define sort(v) 	sort(v.begin(),v.end())
#define print(v) 	for(auto n:v) cout<<n<<" "
#define rev(v) 		reverse(v.begin(), v.end())
#define int 		long long
#define l 			long
#define vi 			vector<int>
#define pb 			push_back
#define endl 		"\n"
#define loop(i,s,e) for(auto i=s; i<e; ++i)


int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


const int N = 1e3 + 5;
int dp[N][N];

// DP--->Recursive + Memoization
int KnapSack(vi wt, vi p, int w, int n)
{
	// if Bag capacity is 0 or no item to add
	if (n == 0 || w == 0)
		return 0;

	if (dp[n][w] != -1)
		return dp[n][w];

	if (wt[n - 1] <= w)
	{
		return dp[n][w] = max(p[n - 1] + KnapSack(wt, p, w - wt[n - 1], n - 1) ,
		                      KnapSack(wt, p, w, n - 1));
	}
	else if (wt[n - 1] > w)
	{
		return dp[n][w] = KnapSack(wt, p, w, n - 1);
	}
}

// DP---> Top-Down
int knapsack(vi wt, vi val, int w, int n)
{
	int DP[n + 1][w + 1];
	for (int i = 0; i <= n; i++)
	{
		DP[i][0] = 0;		// This will make 1st coloumn 0
	}
	for (int i = 0; i <= w; i++)
	{
		DP[0][i] = 0;		// This will make 1st row 0
	}

	// i-->n no of elements
	// j-->w Maximum capacity of our KnapSack
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			if (wt[i - 1] <= j)
			{
				DP[i][j] = max(val[i - 1] + DP[i - 1][j - wt[i - 1]], DP[i - 1][j]);
			}
			else
			{
				DP[i][j] = DP[i - 1][j];
			}
		}
	}


	// loop(i, 0, n + 1)
	// {
	// 	loop(j, 0, w + 1)
	// 	{
	// 		cout << DP[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	return DP[n][w];

}

// Main Function
int32_t main() {
	FIO();
	int n, w;
	cin >> n >> w;
	vi wt(n); vi p(n);
	loop(i, 0, n)
	{
		cin >> p[i];
	}
	loop(i, 0, n)
	{
		cin >> wt[i];
	}

	// memset(dp, -1, sizeof(dp));
	// cout << KnapSack(wt, p, w, n);
	// cout << endl;
	cout << knapsack(wt, p, w, n);

	return 0;
}



