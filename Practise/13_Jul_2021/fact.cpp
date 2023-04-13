//AIM :
#include<bits/stdc++.h>
using namespace std;

#define ff 			first
#define ss 			second
#define sort(v) 	sort(v.begin(),v.end())
#define print(v) 	for(auto n:v) cout<<n<<" "
#define rev(v) 		reverse(v.begin(), v.end())
#define int 		long long int
#define l 			long
#define vi 			vector<int>
#define pb 			push_back
#define endl 		"\n"
#define loop(i,s,e) for(auto i=s; i<e; ++i)


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

	int n;
	cin >> n;
	int p = 1;
	loop(i, 1, n + 1)
	{
		p *= i;
	}
	cout << p;
	return 0;
}



