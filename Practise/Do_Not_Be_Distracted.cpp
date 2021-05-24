/*
Link   : https://codeforces.com/contest/1520/problem/A
Author : seeitsmanish
*/
#include<bits/stdc++.h>
using namespace std;

#define x 				first
#define y				second
#define pb 				emplace_back
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
	int n;
	cin >> n;
	cin.get();
	string s;
	getline(cin, s);
	unordered_map<char, bool> m;

	loop(i, 1, n)
	{
		if (m.find(s[i]) != m.end())
		{
			cout << "NO" << endl;
			return;
		}
		if (s[i] != s[i - 1])
		{
			m.emplace(s[i - 1], true);
		}
	}

	if (m.find(s[n - 1]) != m.end())
	{
		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;

}


int32_t main() {
	FIO();
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}



