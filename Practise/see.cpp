//AIM :
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
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int __gcd(int a, int b) {return b == 0 ? a : __gcd(b, a % b);}

void series()
{
	int k;
	cin >> k;
	loop(i, 1, 2 * k + 2)
	{
		cout << i*i << " " ;
	}
	cout << endl;
	vi v;
	for (int i = 1 ; i  < 2 * k + 2; i++)
	{
		v.pb( k + i * i);
		cout << k + i*i << " ";
	}
	cout << endl;
	int sum = 0;
	loop(i, 0, 2 * k)
	{
		int call = __gcd(v[i], v[i + 1]);
		sum += call;
		cout << call << " ";
	}
	cout << endl;
	cout << "Sum : " << sum << endl;
}

void table()
{
	int n;
	cin >> n;
	cout << "\nTable of " << n << endl;
	loop(i, 1, 40)
	{
		cout << n*i << " ";
	}
}

int32_t main() {
	FIO();
	series();
	table();

	return 0;
}







