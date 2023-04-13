//AIM : https://www.codechef.com/JUNE21C/problems/SHROUTE
//HANDLE : mankaran_07
#include<bits/stdc++.h>
using namespace std;

#define f 				first
#define s 				second
#define all(v) 			v.begin(),v.end()
#define ll  			long long int
#define M 				1000000007
#define log(args...)			{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a > b ? b : a;}
int __gcd(int a, int b) {return b == 0 ? a : __gcd(b, a % b);}
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cout << *it << " = " << a << endl;
	err(++it, args...);
}

void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	FIO();
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t, dist1 = 0, dist2 = 0;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		while (m--) {
			int p;
			cin >> p;
			p = p - 1;
			if (a[p] == 1 || a[p] == 2 || p == 0) {
				cout << 0 << " ";
			}
			else
			{
				bool found1 = false;
				bool found2 = false;
				if (a[p] == 0) {
					for (int i = p; i < n; i++) {
						if (a[i] == 2) {
							dist1 = abs(i - p);
							found1 = true;
							break;
						}

					}
					if (found1 == false) dist1 = INT_MAX;

					for (int i = p; i >= 0; i--) {
						if (a[i] == 1) {
							dist2 = abs(p - i);
							found2 = true;
							break;
						}

					}
					if (found2 == false) dist2 = INT_MAX;
				}
				// log(dist1, dist2);
				if (found1 or found2) {
					cout << min(dist1, dist2) << " ";
				}
				else {
					cout << -1 << " ";
				}
				dist1 = 0, dist2 = 0;
			}

		}
		cout << endl;

	}

}