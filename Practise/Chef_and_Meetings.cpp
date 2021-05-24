//Link : https://www.codechef.com/FEB21C/problems/MEET
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

void timeCon(string t, int &h, int &m)
{
	h = (t.at(0) - '0') * 10 + (t.at(1) - '0');
	m = (t.at(3) - '0') * 10 + (t.at(4) - '0');

	if (t.at(6) == 'A' & h == 12)
	{
		h = 0;
	}

	if (t.at(6) == 'P' & h != 12)
	{
		h += 12;
	}

}

int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	getch();
	while (t-- != 0)
	{
		string myTime; 	// When me and my friend is going to call
		getline(cin, myTime);
		int myh, mym;
		timeCon(myTime, myh, mym);
		int myMin = (myh * 60) + mym;
		int n;
		cin >> n;
		getch();
		while (n-- != 0)
		{	int shh, ehh, smm, emm;
			string timeRange;
			getline(cin, timeRange);
			string start, end;
			start = timeRange.substr(0, 7);
			end = timeRange.substr(9, 16);
			timeCon(start, shh, smm);
			timeCon(end, ehh, emm);
			int sMin = (shh * 60) + smm;
			int eMin = (ehh * 60) + emm;
			if (myMin >= sMin && myMin <= eMin)
			{
				cout << 1;
			}
			else
			{
				cout << 0;
			}


		}
		cout << "\n";
	}





	return 0;
}