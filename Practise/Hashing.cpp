//AIM : print no of occurences of a number in an array
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

const int N = 1e5 + 10;
int hsh[N];

int32_t main() {
	FIO();
	int n;
	cin >> n;
	vi a(n + 1);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		hsh[a[i]]++;
	}

	int q;
	cin >> q;
	while (q--)
	{
		int num;
		cin >> num;
		cout << hsh[num] << endl;
	}


	return 0;
}