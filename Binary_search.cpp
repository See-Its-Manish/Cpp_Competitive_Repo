// AIM: Using Binary Search, Find positon of given element in given sorted array.
#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back

void binarySearch(vi v, int k) {
	int lb, ub, m;
	lb = 0;
	ub = v.size() - 1;
	auto t1 = high_resolution_clock::now();
	while (lb <= ub) {
		m = (lb + ub) / 2;
		if (v[m] == k) {
			break;
		}
		else if (v[m] > k) {
			ub = m - 1;
		}
		else if (v[m] < k) {
			lb = m + 1;
		}
	}
	auto t2 = high_resolution_clock::now();
	cout << "For Binary Serach\n";
	if (lb > ub) {
		cout << (-1);
	}
	else {
		cout << (m + 1);
	}
	cout << endl;
	auto duration = duration_cast<microseconds>(t2 - t1);
	cout << "time taken: " << duration.count() << " microseconds\n";

}

void linearSearch(vi v, int k) {
	bool found = false;
	int i = 1;
	auto start = high_resolution_clock::now();
	for (auto n : v) {
		if (n == k) {
			found = true;
			break;
		}
		i++;
	}
	auto end = high_resolution_clock::now();
	cout << "\nFor Linear Search\n";
	if (!found) {
		cout << (-1);
	}
	else {
		cout << (i);
	}
	cout << endl;
	auto dur = duration_cast<microseconds>(end - start);
	cout << "time taken: " << dur.count() << " microseconds\n";
}





int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vi sortedArray;
	for (int i = 1; i <= 1e7; i++) {
		sortedArray.pb(i);
	}
	//  int toPush;
	//  while(cin>>toPush){
	//  sortedArray.pb(toPush);
	// }

	//Binary Search
	binarySearch(sortedArray, n);


	//Linear Search
	linearSearch(sortedArray, n);



	return 0;
}