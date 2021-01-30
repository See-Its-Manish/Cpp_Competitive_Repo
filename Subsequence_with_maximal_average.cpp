//Link : https://classroom.codingninjas.com/app/classroom/me/6698/content/98937/offering/1105572/problem/6007
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

float max(float a1, float a2) {
	if (a1 > a2) {
		return (a1);
	}
	else {
		return (a2);
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	float toComp;
	cin >> n >> k;
	vi a(n + 1);
	for (int in = 0; in <= n; in++) {
		cin >> a[in];
	}
	vector<float> dp(n + 1, 0);
	vi size(n + 1, 0);
	dp[1] = a[1];
	size[1] = 1;
	dp[2] = max(a[2], ((a[1] + a[2]) / 2.0));
	size[2] = (a[2] == max(a[2], (a[1] + a[2]) / 2.0)) ? 1 : 2;
	for (int i = 3; i <= n; i++) {
		for (int j = 1; j <= i - 1; j++) {
			if (a[j] > a[i]) {
				continue;
			}
			else {

				float s = float(j + 1);
				if (j == 1)
				{
					toComp = max(dp[i], (a[i] + dp[j]) / s);
					size[i] = size[j] + 1;

				}
				dp[i] = max(dp[i], (a[i] + dp[j]) / s);
				if (toComp != dp[i]) {
					size[i] = size[j] + 1;
					toComp = dp[i];
				}
			}
		}
	}
	float maxSum = -1.0;
	loop(1, n + 1, 1) {
		if (size[it] >= k) {
			maxSum = max(maxSum, dp[it]);
		}
	}

	cout << fixed << setprecision(6) << maxSum;
	return 0;
}