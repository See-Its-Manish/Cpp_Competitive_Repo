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
int min(int a, int b) {return a > b ? b : a;}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


void solve()
{
	int n, x, k;

	cin >> n >> x >> k;
	bool isfound = false;
	for (int i = 0; i <= x; i += k) {
		if (i == x)
		{
			cout << "YES" << endl;
			isfound = true;
		}
	}
	if (!isfound)
	{
		for (int i = n + 1; i >= x; i -= k) {
			if (i == x)
			{
				cout << "YES" << endl;
				isfound = true;
			}

		}
	}
	if (!isfound)
		cout << "NO" << endl;

}


int32_t main() {
	FIO();
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}



