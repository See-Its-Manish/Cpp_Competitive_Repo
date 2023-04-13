//AIM :
#include<bits/stdc++.h>
using namespace std;

#define ff 			first
#define ss 			second
#define sort(v) 	sort(v.begin(),v.end())
#define print(v) 	for(auto n:v) cout<<n<<" "
#define rev(v) 		reverse(v.begin(), v.end())
#define int 		long long
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

bool isPrime(int n)
{
	if (n == 1 || n == 0)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}


int32_t main() {
	FIO();
	int s, e;
	cin >> s >> e;
	int sum = 0;
	loop(i, s, e + 1) {
		if (isPrime(i)) {
			cout << i << " ";
			sum += i;
		}
	}
	cout << endl << sum;

	return 0;
}



