/*
Link   : https://www.codechef.com/MAY21C/problems/XOREQUAL
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
#define all(v)			v.begin(), v.end()
#define print(v) 		for(auto n:v) cout<<n<<" "
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))
#define M               1000000007

int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a > b ? b : a;}
void FIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

}

const int q = 500000004;	// Modular inverse of 2 with M


int powM(int x, int y , int m)
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

void solve()
{
	int n;
	cin >> n;
	int p = powM(2, n, M);
	cout << (p % M * q % M) % M << endl;

}


int32_t main() {
	FIO();
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}



