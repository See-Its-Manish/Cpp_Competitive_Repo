#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define el cout<<"\n"
#define loop(st,con,inc) for(auto it=st; it!=con; it+=inc)


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// int a = 12;
	// int &b = a;
	// b = 13;
	// cout << a << endl;
	// cout << &a;
	int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// int *ptr = ar;
	loop(0, 10, 1) {
		cout << *(ar + it) << " ";
	}

	return 0;
}