//AIM : 1! + 2! + 3! + ------ + n!
#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int sum = 0, product = 1, i = 1;
	while (n-- != 0) {
		product *= i++;
		sum += product;
	}
	cout << "Sum of Series: " << sum;

	return 0;
}
