//AIM : Count number of subsets with given sum
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

int countSubsetSum(vector<int> a, int s, int n)
{
	// s---->Sum
	// n-----> Size of Array
	// Base cases
	int dp[n + 1][s + 1];		//DP[sizeOfArray][sum]
	loop(i, 1, s + 1)		// When size of array is 0 but sum is not
	{
		dp[0][i] = 0;		// count = 0
	}
	loop(i, 0, n + 1)
	{
		dp[i][0] = 1;		// When size of array isn't 0. but sum is 0, we
	}					// always have an empty set. Therefore count = 1


	// Self Work

	loop(i, 1, n + 1)	// Looping over n, Size of array
	{
		loop(j, 1, s + 1)		// Looping over s, Sum
		{
			if (a[i - 1] <= j)
			{
				dp[i][j] = dp[i - 1][j - a[i - 1]] + dp[i - 1][j];
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	return dp[n][s];

}


int32_t main() {
	FIO();

	int n, s;
	cin >> n >> s;
	vi a(n);
	loop(i, 0, n)
	{
		cin >> a[i];
	}
	cout << countSubsetSum(a, s, n);

	return 0;
}



