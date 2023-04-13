//Link : https://www.codechef.com/FEB21C/problems/TEAMNAME
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define int long long
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define el cout<<"\n"
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)

void getch()
{
	cin.get();
}

int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t-- != 0)
	{
		int n;
		cin >> n;
		getch();
		string s;
		getline(cin, s);
		istringstream stm(s);
		string ext;
		vector<string> words;
		while ( stm >> ext )
		{
			words.pb(ext);
		}
		// print(words);
		int ch[26] = {0};
		int noOfElements = 0;
		for (auto w : words)
		{
			ch[w.at(0) - 'a']++;
		}
		int noOfRepeats = 0;
		for (int n : ch)
		{
			if (n > 1)
			{
				noOfRepeats += n;
			}
		}
		int noOfPairs = 1;
		while (n != 2)
		{
			noOfPairs *= n--;
		}
		cout << noOfPairs - noOfRepeats << endl;
	}

	return 0;
}