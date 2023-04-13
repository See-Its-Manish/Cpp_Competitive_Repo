//AIM : Print all permuatations of an array
#include<bits/stdc++.h>
using namespace std;

#define x 				first
#define y				second
#define pb 				emplace_back
#define vi 				vector<int>
#define int 			long long int
#define endl 			"\n"
#define all(v)			v.begin(),v.end()
#define print(v) 		for(auto &n:v) cout<<n<<" "
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))

int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a > b ? b : a;}
int __gcd(int a, int b) {return b == 0 ? a : __gcd(b, a % b);}

void FIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}




int32_t main() {
	FIO();

	// Code Starts here !

	vi v = {1, 2, 3};
	/*
	All Permuatations possible -> 3! = 6
		1  2  3
		1  3  2
		2  1  3
		2  3  1
		3  1  2
		3  2  1
	*/

	vector<int> a = {1, 2, 3};
	do {
		next_permutation(all(a));
		cout << "Permutations Possible" << endl;
		for (int i = 0; i < a.size(); i++)
		{
			cout << v[a[i] - 1] << " ";
		}
		cout << endl;

		cout << "Permutable array\n";
		print(a); cout << endl;
	} while (next_permutation(all(v)));


	return 0;
}








