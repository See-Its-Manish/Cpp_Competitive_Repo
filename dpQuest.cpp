//Link :
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

	int n;
	cin >> n;
	vi a(n + 1, 0);
	vi dp(n + 1, 0);
	int in, i = 1;
	while (cin >> in) {
		a[i++] = in;
	}
	dp[1] = a[1];
	dp[2] = max(a[2], a[1] + a[2]);

	for (int it = 3; it <= n; it++) {
		dp[it] = a[it] + max(dp[it - 1], dp[it - 2]);
	}

	cout << dp[n];
	return 0;
}