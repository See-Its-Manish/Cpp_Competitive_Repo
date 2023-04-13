// This is a O(n^2) Time Complexity Solution.
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
	dp[1] = 0;
	dp[2] = max(0, a[2] - a[1]);
	for (int i = 3; i <= n; i++) {
		dp[i] = max(0, a[i] - (a[i - 1] - dp[i - 1]));
	}
	int maxProfit = 0;
	for (int i = 1; i <= n; i++) {
		maxProfit = max(maxProfit, dp[i]);
	}
	cout << maxProfit;

	return 0;
}