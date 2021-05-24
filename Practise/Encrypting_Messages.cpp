/*
LINK :  https://codeforces.com/contest/177/problem/D2
AUTHOR: seeitsmanish
8\*/
#include<bits/stdc++.h>
using namespace std;

#define x 				first
#define y				second
#define pb 				push_back
#define vi 				vector<int>
#define int 			long long int
#define endl 			"\n"
#define all(v)			v.begin(),v.end()
#define print(v) 		for(auto &n:v) cout<<n<<" "
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))

int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a > b ? b : a;}
int __gcd(int a, int b) {return b == 0 ? a : __gcd(b, a % b);}

void FIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



int32_t main() {
	FIO();

	int n, m, c;
	cin >> n >> m >> c;

	vi a(n + 1);
	loop(i, 0, n)
	cin >> a[i];

	vi k(m);
	loop(i, 0, m)
	cin >> k[i];


	loop(i, 0, m)
	{
		a[i] = (a[i] + k[i]);
		a[n - m + i] =  ((a[n - m + i] - k[i])) ;
	}
	print(a); cout << endl;

	a[0] = a[0] % c;
	loop(i, 1, n + 1)
	{
		a[i] = (a[i - 1] + a[i]) % c;
	}

	print(a);

	cout << endl;
	cout << 4 % -3 << endl;

	return 0;
}








