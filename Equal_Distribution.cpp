//Link :
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define loop(i,c,inc) for(auto start=i;start<=c;start+=inc)
#define nl cout<<endl
#define acc(v,n) accumulate(v.begin(),v.end(),n)


vi balancearray(vi a1, vi a2) {
	vi diff = {0};

	int sum1 = acc(a1, 0);
	cout << sum1 << endl;
	int sum2 = acc(a2, 0);
	cout << sum2 << endl;


	return diff;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vi v;
	int n;
	cin >> n;
	while (n-- != 0) {
		int a;
		cin >> a;
		v.pb(a);
	}

	sort(v);
	vi v0, v1;

	if (v.size() % 2 != 0) {
		v1.pb(0);
	}

	loop(0, v.size() - 1, 1) {
		if (start % 2 == 0) {
			v0.pb(v[start]);
		}
		else {
			v1.pb(v[start]);
		}

	}


	print(v0); nl;
	print(v1); nl;
	balancearray(v0, v1);




	return 0;
}