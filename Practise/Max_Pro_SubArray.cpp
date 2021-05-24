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

	int n, in = 0;
	cin >> n;
	vi a(n);
	vi suffixP(n);
	while (n-- != 0)
	{
		cin >> a[in++];
	}

	suffixP[0] = a[0];
	for (int i = 1; i < in; i++)
	{
		suffixP[i] = suffixP[i - 1] * a[i];
	}

	print(suffixP);

	return 0;

}