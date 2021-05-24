//LINK : https://www.hackerrank.com/challenges/dynamic-programming-classics-the-longest-common-subsequence/problem?h_r=internal-search
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

vi LCS(vi& a, vi& b, int n, int m)
{
	int dp[n + 1][m + 1];

	loop(i, 0, n + 1)
	dp[i][0] = 0;
	loop(i, 0, m + 1)
	dp[0][i] = 0;

	loop(i, 1, n + 1)
	{
		loop(j, 1, m + 1)
		{
			if (a[i - 1] == b[j - 1])
				dp[i][j] = 1 + dp[i - 1][j - 1];
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	vi toReturn;

	int i = n;
	int j = m;

	while (i > 0 && j > 0)
	{
		if (a[i - 1] == b[j - 1])
		{
			toReturn.push_back(a[i - 1]);
			i--; j--;
		}
		else
		{
			if (dp[i - 1][j] > dp[i][j - 1])
				i--;
			else
				j--;
		}
	}
	rev(toReturn);
	return toReturn;
}

int32_t main() {
	FIO();

	int n, m;
	cin >> n >> m;
	vi a(n);
	vi b(m);

	loop(i, 0, n)
	cin >> a[i];
	loop(i, 0, m)
	cin >> b[i];

	vi toPrint = LCS(a, b, n, m);
	print(toPrint);

	return 0;
}



