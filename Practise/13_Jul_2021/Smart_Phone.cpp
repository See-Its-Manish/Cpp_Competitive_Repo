//Link : https://www.codechef.com/ZCOPRAC/problems/ZCO14003
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

ll max(ll a, ll b) {
	return (a > b ? a : b);
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vector<ll> a(n + 1);
	vector<ll> dp(n + 1);
	int i = 1, size = n;
	while (size-- != 0) {
		cin >> a[i++];
	}
	if (n == 1) {
		cout << a[1];
		exit(0);
	}
	sort(a);
	dp[1] = a[1] * n;
	dp[2] = max(dp[1], (a[2] * (n - 1)));
	loop(3, n + 1, 1) {
		dp[it] = max(dp[it - 1], (a[it] * (ll)(n - it + 1)));
	}
	cout << dp[n];
	return 0;
}