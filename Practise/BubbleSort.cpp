#include<iostream>
using namespace std;
using namespace chrono;
int* Sort(int arr[], int s) {

	bool sorted = true;

	for (int i = 0; i < s; i++) {

		sorted = true;

		for (int j = 1; j < s - i; j++) {

			if (arr[j] < arr[j - 1]) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
				sorted = false;
			}

		}
		if (sorted == true) break;

	}

	return arr;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a[100], index = 0;
	// cout << "Enter the elements of array: ";
	for (int i = 100; i > 0; i--) {
		// cin >> a[i];
		a[index++] = i;
	}
	auto t1 = high_resolution_clock::now();
	int *b = Sort(a, 100);
	auto t2 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(t2 - t1);
	cout << "time taken: " << duration.count() << " microseconds\n";
	// cout << "SORTED ARRAY: ";
	// for (int j = 0; j < 10; j++) {
	// 	cout << *b << " ";
	// 	b++;
	// }


	return 0;
}