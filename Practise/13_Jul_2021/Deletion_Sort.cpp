/*
Link   : https://www.codechef.com/COOK128C/problems/DELSORT
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
	int n;
	cin >> n;

	vi a(n);
	loop(i, 0, n)
	{
		cin >> a[i];
	}
	int index_till_sorted = -1;
	loop(i, 0, n)
	{
		if (a[i] < a[i - 1])
		{
			index_till_sorted = i - 1;
		}
	}

	vector<pair<int, int>> m;
	loop(i, 0, n)
	{
		m.push_back(make_pair(a[i], i));
	}
	sort(m);

	pair<int, int> p;
	loop(i, 0, n)
	{
		p = m[i];
		cout << p.ss << "---->  " << p.ff << "----> " << i << endl;
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



