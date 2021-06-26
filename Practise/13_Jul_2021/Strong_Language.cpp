/*
Link   : https://www.codechef.com/APRIL21C/problems/SSCRIPT
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
	int n, k;
	cin >> n >> k;
	cin.get();
	string s;
	getline(cin, s);

	int count = 0;
	vi star;
	int maxStar = 0;
	loop(i, 0, n)
	{
		if (s[i] == '*')
		{
			int j = i;
			while (s[j] == '*' && j < n)
			{
				count++;
				j++;
			}
			i = j - 1;
			star.pb(count);
			count = 0;
		}

	}

	loop(i, 0, star.size())
	{
		maxStar = max(maxStar, star[i]);
	}

	if (maxStar >= k)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
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



