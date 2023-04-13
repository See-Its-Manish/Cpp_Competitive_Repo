//AIM :
#include<bits/stdc++.h>
using namespace std;

#define x 				first
#define y				second
#define pb 				push_back
#define vi 				vector<int>
#define int 			long long int
#define endl 			"\n"
#define rev(v) 			reverse(v.begin(), v.end())
#define sort(v) 		sort(v.begin(),v.end())
#define print(v) 		for(auto n:v) cout<<n<<" "
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))
#define M               1000000000+ 7

int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a > b ? b : a;}
int __gcd(int a, int b) {return b == 0 ? a : __gcd(b, a % b);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

const int n = 10;

const int d = 500000004;

bool calculate(int x)
{
	return ( x ^ (x + 1)) == ((x + 2) ^ (x + 3));
}

int  powM1(int x, int y, int m)
{
	if (y == 0)
		return 1;
	else if (!(y & 1))
	{
		int t = powM1(x, y / 2, m);
		return (((1LL * t * t) % m));
	}
	else
	{
		int t = powM1(x, y / 2, m);
		return ((((1LL * t * t) % m) * x) % m);

	}
}

int powM2(int x, int y , int m)
{
	int ans = 1 ;
	int r = 1;
	while (r <= y)
	{
		if (r & y)
		{
			ans = ((1LL * ans * x) % m);
		}

		x = ((1LL * x * x) % m);

		r <<= 1;
	}
	return ans;
}

int32_t main() {
	FIO();

	// loop(i, 0, 101)
	// {
	// 	cout << i << "--->" << calculate(i) << endl;
	// }

	// cout << ((pow(2, 5) % n) * (1 / 2) % n) % n;
	cout << powM1(2, 13, 7) << endl;
	cout << powM2(2, 13, 7);

	return 0;
}







