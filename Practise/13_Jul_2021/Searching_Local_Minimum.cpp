//Link : https://codeforces.com/contest/1480/problem/C
#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define int long long
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define el cout<<"\n"
#define flush cout.flush
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)
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

	const int N = 1e5;
	int lb = 1;
	int ub = N;
	while (lb <= ub)
	{
		int m = (lb + ub) / 2;
		cout << "? " << m;
		int n;
		cin >> n; flush();
		el;

		cout << "? " << m + 1;
		int toRight;
		cin >> toRight; flush();
		el;
		cout << "? " << m - 1;
		int toLeft;
		cin >> toLeft; flush();

		el;
		if (n < min(toLeft, toRight))
		{
			cout << "! " << m;
			break;
		}
		if (toLeft <= n && toRight >= n)
		{
			ub = m - 1;
		}
		else if (toLeft >= n && toRight <= n)
		{
			lb = m + 1;
		}
	}


	return 0;
}