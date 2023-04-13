//AIM: Print pairs of primes in vector a if thier sum exists in vector a
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define int long long
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define el cout<<"\n"
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)

vi a = {2, 15, 7, 6, 3, 8, 22, 41, 23, 4, 18,
        13, 5, 27, 47, 12, 11, 23, 10, 9, 7, 21, 30, 28, 8
       };

// Performing Binary Search on Array
bool isPresent(int k)
{
	int m;
	int lb = 0;
	int ub = a.size() - 1;
	while (lb <= ub) {
		m = (lb + ub) / 2;
		if (a[m] == k) {
			return true;
		}
		else if (a[m] > k) {
			ub = m - 1;
		}
		else if (a[m] < k) {
			lb = m + 1;
		}
	}
	return false;
}

// Checking if number is prime or not
bool isPrime(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	sort(a);
	set<int> primes;
	for (auto n : a)
	{
		if (isPrime(n))
		{
			primes.insert(n);
		}
	}
	// for (int i = 0; i < primes.size(); i++)
	// {
	// 	for (int j = i + 1; j < primes.size(); j++)
	// 	{
	// 		if (isPresent(primes[i] + primes[j]))
	// 		{
	// 			cout << primes[i] << " " << primes[j] << " " << primes[i] + primes[j];
	// 			cout << endl;
	// 		}

	// 	}

	// }

	for (auto itr1 = primes.begin(); itr1 != primes.end(); itr1++)
	{
		auto temp = itr1 + 1;
		for (auto itr2 = temp; itr2 != primes.end(); itr2++)
		{
			if (isPresent((*itr1) + (*itr2)))
			{
				cout << (*itr1) << " " << (*itr2) << " " << (*itr1) + (*itr2);
			}
		}
	}

	return 0;

}