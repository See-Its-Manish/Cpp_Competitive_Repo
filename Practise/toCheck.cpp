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
#define print(v) 		for(auto n:v) cout<<n<<" + "
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))

int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a > b ? b : a;}
int __gcd(int a, int b) {return b == 0 ? a : __gcd(b, a % b);}

void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

bool check(int a, int b, int m)
{
	return ( ((m % a) % b) == ((m % b) % a) );
}


int32_t main() {
	FIO();


	// int n, m;
	// cin >> n >> m;
	vi a;
	cout << ((14 * (14 + 1)) / 2) << endl;
	loop(k, 1, 11)
	{
		int t = 0;
		cout << "\nFor (m,n) : " << "(" << k << "," << 15 << ")" << endl;
		loop(i, 1, 16)
		{
			int count = 0;
			loop(j, i + 1, 16)
			{
				if (check(i, j, k))
				{
					count++;
					cout << "(" << i << "," << j << ")" << " ";
				}
				else
				{
					cout << "\t[" << i << "," << j << "]" << " " << k << " ";
				}
			}
			t += count;
			a.pb(count);
			cout << "----> Count : " << count << endl;
		}
		print(a); cout << " " << t << endl;
		a.clear();
	}

	return 0;
}







