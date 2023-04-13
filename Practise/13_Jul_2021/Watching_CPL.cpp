//LINK : https://www.codechef.com/JAN21C/problems/WIPL
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

int isExist(vi& arr, int sum, int m )
{
	int dp[m + 1][sum + 1];

	loop(i, 0, m + 1)
	dp[i][0] = 1;
	loop(i, 1, sum + 1)
	dp[0][i] = INT_MAX - 1;

	loop(i, 1, m + 1)
	{
		loop(j, 1, sum + 1)
		{
			if (arr[i - 1] < j)
				dp[i][j] = min( 1 + dp[i - 1][j - arr[i - 1]], dp[i - 1][j]);
			else
				dp[i][j] = 1 ;
		}
	}
	if (dp[m][sum] == INT_MAX - 1) return -1;
	return dp[m][sum];
}

int32_t main() {
	FIO();

	int t;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vi a(n);
		loop(i, 0, n)
		cin >> a[i];
		int op1 = isExist(a, k, n) << endl;	// Op1-->Optimum Count 1
		if (op1 == n)
		{
			cout << -1 << endl;
			continue;
		}


	}

	return 0;
}



