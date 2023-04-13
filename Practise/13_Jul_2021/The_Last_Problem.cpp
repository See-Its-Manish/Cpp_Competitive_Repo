/*
Link   : https://www.codechef.com/COOK129C/problems/TLAPM
Author : seeitsmanish
*/
#include<bits/stdc++.h>
using namespace std;

#define x				first
#define y				second
#define pb				emplace_back
#define vi				vector<int>
#define int				long long int
#define endl 			"\n"
#define flush			cin.get()
#define all(v)			v.begin(), v.end()
#define print(v) 		for(auto n:v) cout<<n<<" "
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))


int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a > b ? b : a;}
int __gcd(int a, int b) {return b == 0 ? a : __gcd(b, a % b);}

void FIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

}

int getelement(int a, int b) {
	int m = (a + b) / 2;
	int sum =  (2 * ((m - 1) * (m - 1) + m) - 1);
	int maxc = max(a, b);
	if ((a + b) % 2 != 0)
	{
		sum = sum + maxc;
		if (maxc > a )
		{
			sum = sum + (b - (maxc + 1));
		}
		else if (maxc > b)
		{
			sum  = sum - (b - maxc);
		}
	}
	else
	{
		if (maxc > a )
		{
			sum = sum - (b - maxc);
		}
		else if (maxc > b)
		{
			sum  = sum + (b - maxc);
		}
	}

	return sum;
}


void solve()
{
	// int a, b, c, d;
	// cin >> a >> b >> c >> d;
	cout << getelement(2, 3) << endl;
	cout << getelement(4, 5) << endl;
	cout << getelement(3, 4) << endl;
	cout << getelement(3, 3) << endl;


}


int32_t main() {
	FIO();
	int t;
	cin >> t;
	//flush;
	while (t--)
		solve();

	return 0;
}



