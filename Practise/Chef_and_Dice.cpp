/*
Link   : https://www.codechef.com/APRIL21C/problems/SDICE
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

	if (n == 1)
	{
		cout << 20;
	}
	else if (n == 2)
	{
		cout << 36;
	}
	else if (n == 3)
	{
		cout << 51;
	}
	else if (n == 4)
	{
		cout << 60;
	}
	else if (n > 4)
	{

		int level = n / 4;
		int base = n % 4;
		level *= 44;

		if (base == 0 )
		{
			cout << level + 16;
		}
		else if (base == 1)
		{
			cout << level + 32;
		}
		else if (base == 2)
		{
			cout << level + 44;
		}
		else if (base == 3)
		{
			cout << level + 55;
		}

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



