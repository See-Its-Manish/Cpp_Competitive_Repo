/*
Link   :
Author : seeitsmanish
*/
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


int max(int a, int b) {return a > b ? a : b;}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


void solve()
{
	int r, b, d;
	cin >> r >> b >> d;

	if (d == 0)
	{
		if (r  == b)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;

		return;

	}




	int diff = abs(r - b);

	lb = 1;
	ub = 1e9 + 1;

	while (lb < ub )
	{
		int m = (lb + ub) / 2;

		if (diff == m * d)
		{
			cout << "YES" << endl;
			return;
		}
		else if (diff < m * d)
		{
			ub = m - 1;
		}
		else
		{
			lb = m;
		}
	}





}


int32_t main() {
	FIO();
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}



