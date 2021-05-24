//Link : https://www.codechef.com/FEB21C/problems/MAXFUN
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

	int t;
	cin >> t;
	while (t-- != 0)
	{
		int n, i = 0;
		cin >> n;
		vi a(n);
		while (n-- != 0)
		{
			cin >> a[i++];
		}
		sort(a);
		int x = a[a.size() - 1];
		int y = a[a.size() - 2];
		int z = a[0];
		int toPrint = abs(x - y) + abs(y - z) + abs(z - x);
		cout << toPrint << endl;
	}

	return 0;
}