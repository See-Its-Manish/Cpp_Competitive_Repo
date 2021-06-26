//Link : https://www.codechef.com/FEB21C/problems/HDIVISR
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
int max(int a, int b) { return a > b ? a : b; }

int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int maxD = INT_MIN;
	loop(1, 11, 1) {
		if (n % it == 0)
		{
			maxD = max(maxD, it);
		}
	}
	cout << maxD;
	return 0;
}