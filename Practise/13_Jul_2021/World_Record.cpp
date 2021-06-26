/*
Link   : https://www.codechef.com/APRIL21C/problems/BOLT
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
	float k1, k2, k3, v;
	cin >> k1 >> k2 >> k3 >> v;
	float maxSpeed = 100 / (k1 * k2 * k3 * v);

	int req_value = maxSpeed * 1000;
	int r = req_value % 10;
	if (r >= 5)
	{
		req_value = req_value / 10 + 1;
	}
	else
	{
		req_value = req_value / 10;
	}
	cout << req_value << endl;
	if (req_value >= 958)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}

	cout << endl;
}


int32_t main() {
	FIO();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}



