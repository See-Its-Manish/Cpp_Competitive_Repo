//LINK : https://www.codechef.com/CTLS2021/problems/ITER3
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



int32_t main() {
	FIO();

	int t;
	cin >> t;

	while (t--)
	{
		int n, k, m;
		cin >> n >> k >> m;

		vi a(n);
		loop(i, 0, n)
		{
			cin >> a[i];
		}

		int wa = 0;
		loop(i, 0, n)
		{
			int t;
			cin >> t;
			if (abs(a[i] - t) >= k)
			{
				wa++;
			}
		}

		if (wa <= m)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
		cout << endl;
	}

	return 0;
}



