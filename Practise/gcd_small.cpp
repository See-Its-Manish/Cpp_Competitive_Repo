#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b);}

// For checking if a number is prime or not
bool isPrime(int n)
{
	if (n == 1 || n == 0)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}


int main()
{
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	cout << "GCD of " << a << " " << b << " : " << gcd(a, b) << endl;
	return 0;
}