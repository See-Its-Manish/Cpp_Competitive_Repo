//AIM : To find Longest Common Subsequence
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

// Recusrive Solution
int LCSwithRecusrion(string a, string b, int n, int m)
{
	// Base Case if length one of the string or both become 0
	if (n == 0 || m == 0)
		return 0;

	// Self Work
	if (a[n - 1] == b[m - 1])
		return 1 + LCSwithRecusrion(a, b, n - 1, m - 1);
	else
		return max(LCSwithRecusrion(a, b, n - 1, m), LCSwithRecusrion(a, b, n, m - 1));

}

const int N = 1e3 + 1;
int dp[N][N];

// DP---> Recursion + Memoization
int LCSwithMemoization(string a, string b, int n, int m)
{
	// Base Cases
	if (n == 0 || m == 0)
		return dp[n][m] = 0;

	// Returning if already memoized(Repeated work)
	if (dp[n][m] != -1 )
		return dp[n][m];

	// Self Work
	if (a[n - 1] == b[m - 1])
		return dp[n][m] = 1 + LCSwithMemoization(a, b, n - 1, m - 1);
	else
		return dp[n][m] = max(LCSwithMemoization(a, b, n - 1, m), LCSwithMemoization(a, b, n, m - 1));
}

// DP---> top-down
int LCSwithTopDown(string a, string b, int n, int m)
{
	int DP[n + 1][m + 1];	// DP[Len of a][Len of b]

	// Base Cases
	loop(i, 0, n + 1)
	DP[i][0] = 0;
	loop(i, 1, m + 1)
	DP[0][i] = 0;

	// Self Work

	loop(i, 1, n + 1)
	{
		loop(j, 1, m + 1)
		{
			if (a[i - 1] == b[j - 1])
				DP[i][j] = 1 + DP[i - 1][j - 1];
			else
				DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
		}
	}

	// loop(i, 0, n + 1)
	// {
	// 	loop(j, 0, m + 1)
	// 	{
	// 		cout << DP[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	return DP[n][m];
}

int32_t main() {
	FIO();
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int n = s1.length();
	int m = s2.length();
	cout << LCSwithRecusrion(s1, s2, n, m) << endl;
	mem(dp, -1);
	cout << LCSwithMemoization(s1, s2, n, m) << endl;
	cout << LCSwithTopDown(s1, s2, n, m);
	return 0;
}



