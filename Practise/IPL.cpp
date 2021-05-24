//Link : https://www.codechef.com/ZCOPRAC/problems/ZCO14004
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
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, i = 1;
	cin >> n;
	vi a(n + 1, 0);
	vi dp(n + 1, 0);

	while (n-- != 0) {
		cin >> a[i++];
	}
	dp[1] = a[1];
	dp[2] = a[1] + a[2];
	dp[3] = max(a[1] + a[3], a[2] + a[3]);
	loop(4, i, 1) {
		dp[it] = max(dp[it - 1], max(a[it] + dp[it - 2], a[it] + a[it - 1] + dp[it - 3]));

	}
	cout << dp[i - 1];

	return 0;
}
