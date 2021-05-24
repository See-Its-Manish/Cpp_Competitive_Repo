//AIM :
#include<bits/stdc++.h>
using namespace std;

#define ff                  first
#define ss                  second
#define sort(v)             sort(v.begin(),v.end())
#define print(v)            for(auto n:v) cout<<n<<" "
#define rev(v)              reverse(v.begin(), v.end())
#define int                 long long int
#define li                  long int
#define vi                  vector<int>
#define pb                  push_back
#define endl                 "\n"
#define loop(i,s,e)         for(auto i=s; i<e; ++i)
#define mem(var,val)        memset(var,val,sizeof(var))


int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}



int32_t main() {
    FIO();

    int n;
    cin >> n;
    int dp[n + 2];
    dp[0] = 1;
    for (int i = 1; i <= n + 1; i++)
    {
        dp[i] = dp[i - 1];
        if (i - 2 >= 0)dp[i] += dp[i - 2];
        if (i - 3 >= 0)dp[i] += dp[i - 3];
    }
    cout << dp[n + 1] << "\n";


    return 0;
}



