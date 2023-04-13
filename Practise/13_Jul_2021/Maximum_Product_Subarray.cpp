//Link : https://leetcode.com/problems/maximum-product-subarray/
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define int long long
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define el cout<<"\n"
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)


int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, in = 0;
	cin >> n;
	vi a(n);

	while (n-- != 0)
	{
		cin >> a[in++];
	}

	vector<int> dp(a.size());
	dp[0] = a[0];
	dp[1] = max(max(a[0], a[1]), a[0] * a[1]);
	for (int i = 1; i < a.size(); i++)
	{
		dp[i] = max(dp[i - 1], max(dp[i - 1] * a[i], a[i]));
		if (dp[i - 1] == dp[i])
		{
			dp[i] = 0;
		}
	}
	int maxP = INT_MIN;
	for (int i = 0; i < a.size(); i++)
	{
		maxP = max(maxP, dp[i]);
	}

	cout << (maxP);


	return 0;
}