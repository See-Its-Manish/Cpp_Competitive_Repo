/*
Link   : https://www.codechef.com/GKAH1901/problems/GK1903
Author : manish1010
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
	int n;
	string s;
	cin >> n;
	cin.get();
	getline(cin, s);

	vi g;
	vi a;
	vi h;

	loop(i, 0, n)
	{
		switch (s[i])
		{
		case 'A':
		{
			a.pb(i); break;
		}

		case 'G': {
			g.pb(i); break;
		}

		case 'H':
		{
			h.pb(i); break;
		}
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



