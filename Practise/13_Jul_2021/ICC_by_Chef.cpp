/*
Link   : https://www.codechef.com/RTR2021/problems/ICC
Author : manish1010
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
	string s;
	getline(cin, s);
	vector<pair<int, char>> freq;
	int count = 1;
	loop(i, 1, s.size())
	{
		if (s[i] != s[i - 1])
		{
			freq.pb({count, s[i - 1]});
			count = 1;
		}
		else
		{
			count++;
		}
	}
	freq.pb({count, s[s.size() - 1]});

	// loop(i, 0, freq.size())
	// {
	// 	cout << freq[i].ff << " " << freq[i].ss << endl;
	// }
	// cout << endl;
	char ch;
	int maxFreq = -1;
	loop(i, 0, freq.size())
	{
		if (maxFreq < freq[i].ff)
		{
			maxFreq =  freq[i].ff;
			ch = freq[i].ss;
		}
	}

	cout << maxFreq << " " << ch << endl;
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



