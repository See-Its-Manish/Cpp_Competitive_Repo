/*
Link   : https://www.codechef.com/UANT001/problems/YCCE02
Author : seeitsmanish
*/
#include<bits/stdc++.h>
using namespace std;

#define x 				first
#define y				second
#define pb 				push_back
#define int 			long long int
#define vi 				vector<int>
#define endl 			"\n"
#define rev(v) 			reverse(v.begin(), v.end())
#define sort(v) 		sort(v.begin(),v.end())
#define print(v) 		for(auto n:v) cout<<n<<" "
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))


int max(int a, int b) {return a > b ? a : b;}
ivoid FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cnt min(int a, int b) {return a > b ? b : a;}
	out.tie(NULL);
}

const int N = 2 * 1e7 + 100 ;
vector<bool> isthisprime(N, true);
vector<int> sum_prime(N, 0);

void solve()
{
	int n;
	cin >> n;
	cout << sum_prime[n] << endl;


}


int32_t main() {
	FIO();

	isthisprime[0] = isthisprime[1] = false;
	// Sieve of Eratosthenes
	loop(i, 2, N)
	{
		if (isthisprime[i] == true)
		{
			for (int j =  i * 2; j <= N; j += i)
			{
				isthisprime[j] = false;
			}
		}
	}
	sum_prime[0] = 0;
	loop(i, 1, N)
	{
		if (isthisprime[i])
		{
			sum_prime[i] = sum_prime[i - 1] + i;
		}
		else
		{
			sum_prime[i] = sum_prime[i - 1];
		}
	}



	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}
