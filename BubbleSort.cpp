#include<iostream>
using namespace std;

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
	int a[10];
	cout << "Enter the elements of array: ";
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	int *b = Sort(a, 10);
	cout << "SORTED ARRAY: ";
	for (int j = 0; j < 10; j++) {
		cout << *b << " ";
		b++;
	}


	return 0;
}