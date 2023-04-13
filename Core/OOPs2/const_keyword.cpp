//AIM :
#include<bits/stdc++.h>
using namespace std;

void FIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}







class Test
{
public:
	int x;
	mutable string LOG;

	int getX() const  {	// Can't change the variables of function
		cout << "With const" << endl;
		LOG = "Test";
		return x;
	}

	int getX() {
		std::cout << "Without const" << endl;
		return x;
	}
	void setX(int x)
	{
		this->x = x;
	}
};

void fun(const Test& t) {
	cout << t.getX() << endl;
}



int main() {
	FIO();


	const int MAX_VAL = 1000;
	cout << MAX_VAL << endl;
	// MAX_VAL = 99;	// this gives error
	// MAX_VAL++;		// this gives error

	const int* ptr = &MAX_VAL;
	// *ptr = 1000;

	// int* const ptr1 = &MAX_VAL;
	// *ptr1 = 1000;

	int* p = new int;
	*p = 2;
	p = (int *)&MAX_VAL;
	*p = 20;
	cout << *p << " " << MAX_VAL << endl;
	cout << p << " " << &MAX_VAL << endl;
	cout << *ptr << endl;
	cout << ptr << endl;

	cout << "*********************" << endl;

	int const *a = new int(10);	// can reassign to new bucket but can't update value
	// *a = 10;
	cout << *a << endl;
	a = (int *)&MAX_VAL;


	int* const b = new int;	// with this we can update valur but can't reassign
	*b = 20;
	cout << *b << endl;
	// b = (int *)&MAX_VAL;


	const int* const z = nullptr; // Niether update nor assignable

	Test t;
	fun(t);



	return 0;
}



