//AIM : Unbounded KnapSack Same as Rod Cutting Problem
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
#define pb 				emplace_back
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

int UnboundedKnapSack(vi& val, vi& wt, int w, int n)
{
	int dp[n + 1][w + 1];	// dp[size][weight]
	// Base Cases
	loop(i, 0, n + 1)
	{
		dp[i][0] = 0;
	}
	loop(i, 0, w + 1)
	{
		dp[0][i] = 0;
	}

	// Self Work
	loop(i, 1, n + 1)
	{
		loop(j, 1, w + 1)
		{
			if (wt[i - 1] <= j)
			{
				dp[i][j] = max(val[i - 1] + dp[i][j - wt[i - 1]], dp[i - 1][j]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	// loop(i, 0, n + 1)
	// {
	// 	loop(j, 0, w + 1)
	// 	{
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	return dp[n][w];

}

int32_t main() {
	FIO();

	int n, w;
	cin >> n >> w;
	vi val(n), wt(n);

	loop(i, 0, n)
	cin >> val[i];

	loop(i, 0, n)
	cin >> wt[i];

	cout << UnboundedKnapSack(val, wt, w, n);


	return 0;
}



