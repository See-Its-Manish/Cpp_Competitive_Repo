/*AIM : Given array of int.
Queries: l r x
such that a[l]+=x, a[l+1]+=x,----a[r]+=x
print array
*/
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
#define ull unsigned long long
#define vii vector<int,int>

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, in, i = 1;
	cin >> n;
	int size = n;
	vi v(n + 2, 0);
	while (n-- != 0) {
		cin >> in;
		v[i++] = in;
	}
	int s, e, x;
	int m; cin >> m;
	vi dv(size + 2, 0);
	while (m-- != 0) {
		cin >> s >> e >> x;
		dv[s] += x; dv[e + 1] -= x;
	}
	loop(2, i, 1)
	dv[it] += dv[it - 1];

	loop(1, i, 1)
	cout << v[it] + dv[it] << " ";

	return 0;
}