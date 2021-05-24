//AIM: Insertion Sort
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define el cout<<"\n"
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// Code Starts from here Please Ignore above lines

	int a[] = {34 , 74, 23, 63, 23, 53 , 642, 235};
	int size = sizeof(a) / sizeof(a[0]);

	// Process of Insertion Sort
	for (int j = 1; j < size; j++) {
		int key = a[j];
		int i = j - 1;

		while (i >= 0 && a[i] > key) {
			a[i + 1] = a[i];
			i--;
		}
		a[i + 1] = key;
	}

	// Output
	cout << "Sorted Array: ";
	for (int n : a) {
		cout << n << " ";
	}

	return 0;
}