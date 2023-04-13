//AIM : We have to implement Sieve of Eratosthenes
#include<bits/stdc++.h>
using namespace std;

#define ff 			first
#define ss 			second
#define sort(v) 	sort(v.begin(),v.end())
#define print(v) 	for(auto n:v) cout<<n<<" "
#define rev(v) 		reverse(v.begin(), v.end())
#define int 		long long
#define l 			long
#define vi 			vector<int>
#define pb 			push_back
#define endl 		"\n"
#define loop(i,s,e) for(auto i=s; i<e; ++i)


int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void sieve(int n)
{
	vector<bool> primes(n + 1, true);
	primes[0] = primes[1] = false;

	// Sieve of Eratosthenes
	for (int i = 2; i * i <= n; i++)
	{
		if (primes[i])
		{
			for (int j = i * i; j <= n; j += i)
			{
				primes[j] = false;
			}
		}
	}

	// Printing of primes
	for (int i = 2; i <= n; i++)
	{
		if (primes[i])
			cout << i << " ";
	}

}

int32_t main() {
	FIO();

	int n;
	cin >> n;

	sieve(n);

	return 0;
}



