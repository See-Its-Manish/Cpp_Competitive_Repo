//Link : https://codeforces.com/contest/1480/problem/A
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
	getch();

	while (t-- != 0)
	{
		string s;
		getline(cin, s);
		bool isAlice = true;

		for (int i = 0; i < s.length(); i++)
		{
			char c = s.at(i);
			if (isAlice)
			{
				if (c == 'a')
				{
					cout << "b";
				}
				else
				{
					cout << "a";
				}
				isAlice = false;

			}
			else
			{
				if (c == 'z')
				{
					cout << "y";
				}
				else
				{
					cout << "z";
				}
				isAlice = true;
			}
		}
		cout << endl;
	}

	return 0;
}