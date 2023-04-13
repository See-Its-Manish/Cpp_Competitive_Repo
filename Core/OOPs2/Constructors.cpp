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

class ComplexNumber  {
public:
	int real, img;
	int* ptr;
	// Constructor overloading is a type of polymorphism

	// ComplexNumber() {
	// 	this->real = 0;
	// 	this->img = 0;
	// }
	// ComplexNumber() : real(0), img(0) {}	// Same as above commented

	ComplexNumber(int real = -1, int img = -1)
	{
		this->real = real;
		this->img = real;
	}

	// ComplexNumber(int real)  {
	// 	this-> real = real;
	// }

	ComplexNumber(ComplexNumber &c) {
		cout << "In Copy Constructor" << endl;
		this->real = c.real;
		this->img = c.img;
		this->ptr = new int;
		*(this->ptr) = *(c.ptr);
	}
};

int32_t main() {
	FIO();

	// ComplexNumber c(10, 10);
	// cout << c.real << " " << c.img << endl;
	ComplexNumber c1(10);
	cout << c1.real << " " << c1.img << endl;

	int x = 10;
	ComplexNumber c(1, -1);
	c.ptr = &x;
	ComplexNumber m = c;
	m.real = 9;
	cout << c.real << " " << c.img << " " <<  (*(c.ptr)) << " " << c.ptr << endl;
	cout << m.real << " " << m.img << " " << (*(m.ptr)) << " " << m.ptr << endl;



	return 0;
}








