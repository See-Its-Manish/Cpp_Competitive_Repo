/*
Link   : https://www.codechef.com/problems/STONES
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
	string j, s;
	getline(cin, j);
	getline(cin, s);

	set<char> jewel;

	loop(i, 0, j.size())
	{
		jewel.insert(j[i]);
	}
	int count = 0;

	loop(i, 0, s.size())
	{
		if (jewel.count(s[i]))
		{
			count++;
		}
	}

	cout << count << endl;
}


int32_t main() {
	FIO();
	int t;
	cin >> t;
	cin.get();
	while (t--)
		solve();

	return 0;
}



