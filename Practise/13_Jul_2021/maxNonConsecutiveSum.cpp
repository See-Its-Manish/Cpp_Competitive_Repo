//Link: https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define el cout<<"\n"


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, i = 1, in;
	cin >> n;
	vi a(n + 1, 0);
	while (cin >> in) {
		a[i++] = in;
	}
	vi dp(n + 1, 0);
	dp[1] = max(0, a[1]);
	dp[2] = max(0, max(a[1], a[2]));
	dp[3] = max(max(0, a[1]), max(max(a[2], a[3]), a[1] + a[3]));

	for (int i = 4; i <= n; i++) {
		dp[i] = max(dp[i - 1], a[i] + dp[i - 2]);
	}
	cout << dp[n];

	return 0;
}