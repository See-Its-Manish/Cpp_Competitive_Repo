/*
Link   : https://www.codechef.com/MAY21C/problems/ISS
Author : seeitsmanish
*/
#include<bits/stdc++.h>
using namespace std;

#define x 				first
#define y				second
#define pb 				emplace_back
#define vi 				vector<int>
#define int 			long long int
#define endl 			"\n"
#define rev(v) 			reverse(v.begin(), v.end())
#define sort(v) 		sort(v.begin(),v.end())
#define print(v) 		for(auto n:v) cout<<n<<" "
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))


int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a > b ? b : a;}
void FIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

}

int __gcd(int a, int b)
{
	if (b == 0)
		return a;
	return __gcd(b, a % b);
}

void solve()
{
	int k;
	cin >> k;
	vi v(2 * k + 2);
	loop(i, 1, 2 * k + 2)
	{
		v[i] = k + (i * i);
	}
	print(v);

	int sum = 0;
	loop(i, 1, 2 * k + 1)
	{
		sum += __gcd(v[i], v[i + 1]);
	}
	cout << sum << endl;
}


int32_t main() {
	FIO();
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}



