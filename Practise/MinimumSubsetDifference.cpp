//AIM : Minimum Subset Difference
#include<bits/stdc++.h>
using namespace std;

#define endl 			"\n"
#define ff 				first
#define ss 				second
#define pb 				push_back
#define vi 				vector<int>
#define int 			long long int
#define sort(v) 		sort(v.begin(),v.end())
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))
#define print(v) 		for(auto n:v) cout<<n<<" "
#define rev(v) 			reverse(v.begin(), v.end())


int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int MinimumSubsetSum(vector<int>& a, int sum, int n)
{
	// s--> Sum of Elements
	// n--> Size of Array
	bool dp[n + 1][sum + 1];	// dp[size][Sum]

	// Base Cases
	loop(i, 1, sum + 1)
	{
		dp[0][i] = false;
	}
	loop(i, 0, n + 1)
	{
		dp[i][0] = true;
	}

	// Self Work
	loop(i, 1, n + 1)
	{
		loop(j, 1, sum + 1)
		{
			if (a[i - 1] <= j)
			{
				dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	// Checking for all values of S1
	int S1 = LLONG_MAX;
	loop(i, 0, (sum / 2) + 1)
	{
		if (dp[n][i])
		{
			S1 = min(S1, (sum - 2 * i));
		}
	}

	return S1;

}


int32_t main() {
	FIO();

	int n;
	cin >> n;
	vi a(n);
	int sum = 0;
	loop(i, 0, n)
	{
		cin >> a[i];
		sum += a[i];
	}

	int minDiff = MinimumSubsetSum(a, sum, n);

	cout << minDiff;
	return 0;
}



