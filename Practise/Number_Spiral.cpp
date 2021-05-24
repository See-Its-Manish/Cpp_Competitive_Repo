//LINK: https://cses.fi/problemset/task/1071
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
// bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int32_t main() {
	FIO();

	int t;
	cin >> t;


	while (t--)
	{
		int x, y;
		cin >> x >> y;

		int n = max(x, y) - 1;

		int l = n - 1;



		int ans = 2 * (n + 1 + ((l * (l + 1)) / 2)) - 1;



		if (x == y)
		{
			cout << ans << endl;
			continue;
		}

		int max_coor = max(x, y);

		if ((max_coor - 1) % 2 == 0)
		{
			if (x > y)
				cout << ans - (max_coor - y);
			else
				cout << ans + (max_coor - x);
		}
		else {
			if (x > y)
				cout << ans + (max_coor - y);
			else
				cout << ans - (max_coor - x);
		}
		cout << endl;
	}


	return 0;
}



