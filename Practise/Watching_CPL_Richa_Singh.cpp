/*
Credits: Richa Singh
CodeChef Id: https://www.codechef.com/users/singh_richa
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define sz(c) c.size()
#define fr first
#define sc second
#define pb push_back
#define sz(c) c.size()
#define ppb  pop_back
#define all(a)      (a).begin(),(a).end()
#define rep(i,a,n)   for( int i=a ; i<n ; i++)
#define U 1000000007
#define N 100005
#define ins insert

void FIO() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}



signed main()
{
  FIO();
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int h[n];             // Array of length n --> Heights of Boxes
    rep(i, 0, n) cin >> h[i];
    sort(h, h + n);       // Sorted the array
    reverse(h, h + n);    // Now Reversed the array such that it is in Decreasing order

    int sum = 0, ans = -1;
    int dp[n + 1][k + 1]; // dp[no of boxes][min height-->k]
    rep(i, 0, n + 1) dp[i][0] = INT_MAX;    // Down is now INT_MAX
    rep(j, 0, k + 1) dp[0][j] = INT_MAX;    // Top is now INT_MAX

    rep(i, 1, n + 1) {
      sum += h[i - 1];    // Sum =h[0]
      rep(j, 1, k + 1)  {
        if (h[i - 1] >= j) dp[i][j] = min(dp[i - 1][j], h[i - 1]);
        else dp[i][j] = min(dp[i - 1][j - h[i - 1]] + h[i - 1], dp[i - 1][j]);
      }
      //cout<<i<<" "<<dp[i][k]<<endl;
      if (dp[i][k] != INT_MAX && sum - dp[i][k] >= k) {
        ans = i;
        break;
      }
    }

    rep(i, 0, n + 1)
    {
      rep(j, 0, k + 1)
      {
        if ()
          cout << dp[i][j] << " ";
      }
      cout << endl;
    }
    cout << ans << endl;
  }

}