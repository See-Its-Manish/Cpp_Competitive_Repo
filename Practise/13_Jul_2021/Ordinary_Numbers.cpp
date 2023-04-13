/*
Link   : https://codeforces.com/contest/1520/problem/B
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

int32_t main() {
	FIO();

	// Pre - Computations
	const int N = 100;
	vector<pair<int, int>> v(N, make_pair(0, 1));

	v[0] = {0, 0};
	int index = 1;
	for (int i  = 1; i <= N; i++)
	{
		if (i % 9 == 0)
		{
			v[i].x = v[i - 1].x + index;
			v[i].y += v[i - 1].y;
			index = (index * 10) + 1;
			v[++i].x = index;
		}
		else
		{
			v[i].x = v[i - 1].x + index;
		}

		v[i].y += v[i - 1].y;

	}

	// Test cases
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int lb = 1;
		int ub = N;
		while (lb <= ub)
		{
			int m = (lb + ub) / 2;

			if (v[m].x == n)
			{
				cout << v[m].y << endl;
				break;
			}
			else if (v[m].x < n)
			{
				lb = m + 1;
			}
			else
			{
				ub = m - 1;
			}
		}

		if (lb > ub )
		{
			cout << v[ub].y << endl;
		}

	}

	return 0;
}



