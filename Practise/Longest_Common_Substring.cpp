//AIM : Length of Longest Common Substring
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

int LCSubstrinng(string a, string b, int m, int n)
{
	int dp[m + 1][n + 1];	// DP[Size of a][Size of b]

	// Base Cases
	loop(i, 0, m + 1)
	dp[i][0] = 0;
	loop(i, 0, n + 1)
	dp[0][i] = 0;

	// Self Work

	loop(i, 1, m + 1)
	{
		loop(j, 1, n + 1)
		{
			if (a[i - 1] == b[j - 1])
				dp[i][j] = 1 + dp[i - 1][j - 1];
			else
				dp[i][j] = 0;
		}

	}

	// loop(i, 0, m + 1)
	// {
	// 	loop(j, 0, n + 1)
	// 	{
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	int maxL = 0;
	loop(i, 0, m + 1)
	maxL = max(maxL, dp[n][i]);

	return maxL;
} n

int32_t main() {
	FIO();

	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	int m = s1.length();
	int n = s2.length();

	cout << LCSubstrinng(s1, s2, m, n);

	return 0;
}



