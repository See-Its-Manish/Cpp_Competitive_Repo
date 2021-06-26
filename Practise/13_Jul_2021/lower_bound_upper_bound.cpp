//AIM : To Demenstorate Lower Bound and Upper Bound
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
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	vi v = {1, 2, 3, 4, 5, 6, 25, 100};
	auto itr = lower_bound(v.begin(), v.end(), n);
	if (*(itr) > n) itr--;
	cout << *(itr);

	return 0;
}