//Link : https://codeforces.com/problemset/problem/276/C
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

	int n, q;
	cin >> n >> q;
	vi a(n + 1);
	loop(1, n + 1, 1) {
		make a freq array and increament it based on queries and then traverse over the array if freq > k add it to ans
		cin >> a[it];
	}
	loop

	return 0;
}