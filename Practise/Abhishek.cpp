//AIM : To add Prime digits in a given number
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	if (n == 1 || n == 0)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}


int sum(int n)
{
	// Base cases
	if (n == 0)
		return 0;

	// Self Work
	int r = n % 10;
	if (isPrime(r))
	{
		return r + sum(n / 10);
	}
	else
	{
		return sum(n / 10);
	}

}

int main() {

	int n;
	cin >> n;
	cout << sum(n);

	return 0;
}



