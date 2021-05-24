//AIM : GCD(a,b) using Euclidean Theorem

#include<bits/stdc++.h>
using namespace std;

#define x 				first
#define y				second
#define pb 				push_back
#define vi 				vector<int>
#define int 			long long int
#define endl 			"\n"
#define rev(v) 			reverse(v.begin(), v.end())
#define sort(v) 		sort(v.begin(),v.end())
#define print(v) 		for(auto n:v) cout<<n<<" "
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))

int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a > b ? b : a;}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int32_t main() {
	FIO();

	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;;

	while (b != 0)
	{
		int temp = a;
		a = b;
		b = temp % b;
	}
	cout << a << endl;

	// Inbuilt ----> __gcd(a,b)

	cout << __gcd(a, b) << endl;

	return 0;
}







