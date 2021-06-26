//AIM : Subset Sum Problem
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

const int N = 1e5 + 5;
int dp[105][N];


// DP --> Recursion + Memoization
bool subsetSum(vector<int> a, int s, int n)
{
	if (n == 0 and s == 0)
		return dp[n][s] = true;
	else if (n == 0)
		return dp[n][s] =  false;
	else if (s == 0)
		return dp[n][s] =  true;

	if (dp[n][s] != -1)
		return dp[n][s];

	if (a[n - 1] <= s)
	{
		return dp[n][s] = (subsetSum(a, s - a[n - 1], n - 1) || subsetSum(a, s, n - 1));
	}
	else
		return dp[n][s] = (subsetSum(a, s, n - 1));
}

// DP-->Top Dowm
bool SubSetSum(vector<int> a, int s, int n)
{
	bool dp[n + 1][s + 1];
	dp[0][0] = 1;

	loop(i, 1, n + 1)
	{
		dp[i][0] = true;
	}
	loop(i, 1, s + 1)
	{
		dp[0][i] = false;
	}

	loop(i, 1, n + 1)
	{
		loop(j, 1, s + 1)
		{
			if (a[i - 1] <= j)
				dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
			else
				dp[i][j] = dp[i - 1][j];
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
	// print(a); cout << endl;
	mem(dp, -1);
	bool isPresent = subsetSum(a, s, n);
	cout << isPresent;
	cout << endl;
	cout << SubSetSum(a, s, n);
	return 0;
}



