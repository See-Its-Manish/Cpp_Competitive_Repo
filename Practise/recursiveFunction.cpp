#include<iostream>
using namespace std;

void printMyName(int n) {		// Recursive Function
	cout << "MANISH" << endl;
	if (n == 0) return;
	printMyName(n - 1);		// Call To ItSelf

}

int main() {
	printMyName(10);
	return 0;
}



