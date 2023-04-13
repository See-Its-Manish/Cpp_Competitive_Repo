#include<bits/stdc++.h>
using namespace std;

#define sort(v) 	sort(v.begin(),v.end())
#define print(v) 	for(auto n:v) cout<<n<<" "
#define rev(v) 		reverse(v.begin(), v.end())
#define li 			long int
#define ll 			long long
#define vi 			vector<int>
#define pb 			push_back
#define el 			cout<<endl
#define log(name) 	std::cout << "-->" << name;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int size; cin >> size;
	vi a(size + 1, 0);
	vi dp(size + 1, 1);
	int n, i = 1;
	while (cin >> n) {
		a[i++] = n;
	}
	dp[1] = 1;
	if (a[2] > a[1])
		dp[2] = 2;
	else
		dp[2] = 1;

	for (int it = 3; it < size + 1; it++) {
		for (int j = 1; j < it; j++) {
			// cout << j << " ";
			if (a[j] >= a[it])
				continue;
			else {
				// cout << "present in j=" << j;
				// cout << endl;
				dp[it] = max(dp[it], 1 + dp[j]);
			}
		}
		cout << endl;
	}
	// print(dp); el;
	int maxSum = 0;
	for (int k = 1; k < size + 1; k++)
		maxSum = max(maxSum, dp[k]);

	cout << maxSum << endl;


	return 0;
}

