//Link : https://www.codechef.com/APRIL21C/problems/SOCKS1
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

bool isEqual(int a, int b)
{
	return a == b;
}


int32_t main() {
	FIO();

	int a, b, c;
	cin >> a >> b >> c;

	if (isEqual(a, b)) {
		cout << "YES";
	}
	else if (isEqual(b, c))
	{
		cout << "YES";
	}
	else if (isEqual(a, c))
	{
		cout << "YES";
	}
	else {
		cout << "NO";
	}


	return 0;
}



