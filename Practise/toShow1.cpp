//Link : https://cses.fi/problemset/task/1070
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

	vi a = {4, 2, 5, 3, 1};

	if (n == 1)
		cout << 1;
	else if (n == 2 || n == 3 )
	{
		cout << "NO SOLUTION";
	}
	else if (n == 4)
	{
		cout << "2 4 1 3";
	}
	else if (n == 5)
	{
		print(a);
		cout << endl;
	}
	else if (n > 5)
	{
		for (int i = n; i - 4 >= 2; i -= 2)
		{
			cout << i << " ";
		}
		print(a);
		int s ;
		if (n % 2 == 0)
			s = 7;
		else
			s = 6;
		for (int i = s ; i < n; i += 2)
		{
			cout << i << " ";
		}
	}
	return 0;
}



