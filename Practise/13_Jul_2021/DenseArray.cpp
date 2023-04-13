//LINK : https://codeforces.com/contest/1490/problem/A
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
int min(int a, int b) {return a > b ? b : a;}
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
		int n;
		cin >> n;
		vi a(n);
		loop(i, 0, n)
		{
			cin >> a[i];
		}
		int count = 0;
		loop(i, 0, n - 1)
		{
			if ( max(a[i], a[i + 1]) - 2 * min(a[i], a[i + 1]) <= 0)
			{
				continue;
			}
			else
			{
				int small = min(a[i], a[i + 1]);
				int large = a[i] + a[i + 1] - small;
				while (2 * small < large)
				{
					count++;
					small = small * 2;
				}

			}
		}

		cout << count << endl;
	}

	return 0;
}



