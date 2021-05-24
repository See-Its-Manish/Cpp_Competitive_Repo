/*
Link   : https://www.codechef.com/COOK128C/problems/BUILDB
Author : seeitsmanish
*/
#include<bits/stdc++.h>
using namespace std;

#define ff 				first
#define ss 				second
#define sort(v) 		sort(v.begin(),v.end())
#define print(v) 		for(auto n:v) cout<<n<<" "
#define rev(v) 			reverse(v.begin(), v.end())
#define int 			long long int
#define li 				long int
#define vi 				vector<int>
#define pb 				push_back
#define endl 			"\n"
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))


int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


void solve()
{
	int n, r;
	cin >> n >> r;
	vi a(n);
	vi b(n);

	loop(i, 0, n)
	{
		cin >> a[i];
	}
	loop(i, 0, n)
	{
		cin >> b[i];
	}

	loop(i, 1, n)
	{
		if (b[i - 1] - (a[i] - a[i - 1])*r > 0)
			b[i] = b[i] +  b[i - 1] - (a[i] - a[i - 1]) * r ;
		else
		{
			continue;
		}
	}

	int max_Tension = INT_MIN;

	loop(i, 0, n)
	{
		max_Tension = max(max_Tension, b[i]);
	}
	cout << max_Tension << endl;

}


int32_t main() {
	FIO();
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}



