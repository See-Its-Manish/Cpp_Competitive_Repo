//Link : https://codeforces.com/contest/1480/problem/A
#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define sort(v) sort(v.begin(),v.end(),comp)
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define int long long
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define el cout<<"\n"
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)
int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void getch() {cin.get();}
int32_t main() {
	FIO();

	int t;
	cin >> t;
	getch();
	while (t-- != 0)
	{
		bool isAlice = true;
		string s;

		getline(cin, s);
		loop(0, s.length(), 1)
		{
			if (isAlice)
			{
				if (s.at(it) == 'a')
				{
					cout << "b" ;
				}
				else
				{
					cout << "a" ;
				}
				isAlice = false;
			}
			else
			{
				if (s.at(it) == 'z')
				{
					cout << "y" ;
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