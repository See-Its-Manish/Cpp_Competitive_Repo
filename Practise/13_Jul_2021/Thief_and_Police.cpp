/*
Link   : https://www.codechef.com/START3C/problems/TANDP
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
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vector<pair<int, int>> theif_movement(int x, int y, int n, int m)
{
	vector<pair<int, int >> v;
	if (x + 1 < = n)
	{
		v.pb(make_pair(x + 1, y));
	}
	if (y + 1 <= m)
	{
		v.pb(make_pair(x, y + 1))
	}
	return v;
}

vector<pair<int, int>> police_movement(int a, int b, int n, int m)
{
	vector<pair<int, int>> v;
	if (a + 1 < = n)
	{
		v.pb(make_pair(a + 1, b));
	}
	if (b + 1 <= m)
	{
		v.pb(make_pair(a, b + 1))
	}
	if (v.size() == 2)
	{
		v.pb(make_pair(a + 1, b + 1))
	}

	return v;
}


void solve()
{
	int n, m, x, y, a, b;
	cin >> n >> m >> x >> y >> a >> b;

	if (((n - x) + (m - y)) > ((n - a) + (m - b)))
	{
		cout << "NO" << endl;
		return;
	}

	pair<int, int> curr_thief;
	pair<int, int> curr_police;





}


int32_t main() {
	FIO();
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}



