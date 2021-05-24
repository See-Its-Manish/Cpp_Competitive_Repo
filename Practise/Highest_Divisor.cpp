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


int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int divisor = 0;
	for (int i = 1; i <= 10; i++)
	{
		if (n % i == 0)
		{
			divisor = max(divisor, i);
		}
	}
	cout << divisor;

	return 0;
}