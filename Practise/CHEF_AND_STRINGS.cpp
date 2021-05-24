//LINK : https://www.codechef.com/CTLS2021/problems/ITER4
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



int32_t main() {
	FIO();

	int t;
	cin >> t;
	cin.get();

	while (t--)
	{
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);

		int ch1[26];
		int ch2[26];
		mem(ch1, 0);
		mem(ch2, 0);

		loop(i, 0, s1.length())
		{
			if (ch1[s1[i] - 'a'] == 0)
				ch1[s1[i] - 'a'] = 1;
		}
		loop(i, 0, s2.length())
		{
			if (ch2[s2[i] - 'a'] == 0)
				ch2[s2[i] - 'a'] = 1;
		}

		int sum = 0;

		loop(i, 0, 26)
		{
			sum += abs(ch1[i] - ch2[i]);
		}

		cout << sum << endl;

	}

	return 0;
}
