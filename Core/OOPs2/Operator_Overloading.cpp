//AIM :
#include<bits/stdc++.h>
#include<typeinfo>
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



class Test {
public:
	int count;
	int arr[100];
	int get_count() const {
		return this->count;
	}
	Test() : count(0) {}
	Test(int c) : count(c) {}
	// overload unary operator ++(prefix, postfix), --()

	// case 1 : overload prefix ++

	void operator ++()  {
		++this->count;
	}

	// case 2 : overload postfix ++

	void operator ++ (int)
	{
		(this->count)++;
	}

	// case 3 : overload binary operators (+, -, *, ...)

	Test operator + (Test &t )
	{
		int temp = this->count + t.count;
		return Test(temp);
	}

	// case 4: overload comparision operator

	bool operator < (Test &v) {
		return this->count < v.count;
	}

	// Case 5: overload assigment operator

	void operator += (Test &v) {
		this->count += v.count;
	}

	// case 6 : overload subscript operator []

	int& operator [] (int n)
	{
		if (n < 0 or n >= 100) exit(1);
		return this->arr[n];
	}

	// Operators can't be overload
	/*
		1) (.) dot operator.
		2) (?:) ternary operator.
		3) (::) scope resolution operator.
		4) (.*) pointer to member.
		5) typeid
		6) sizeof

	*/

};


int main() {
	FIO();

	// Code Starts here !

	Test t;
	t.count = 0;
	cout << t.get_count() << endl;
	++t;
	cout << t.get_count() << endl;
	t++;
	cout << t.get_count() << endl;

	Test x(10);

	Test c = x + t;
	cout << c.get_count() << endl;
	cout << ( c < t) << endl;
	t += c;
	cout << t.get_count() << endl;

	t[10] = 10;
	cout << t.arr[10] << endl;

	cout << t[10] << endl;
	int n = 10;
	cout << (typeid(t) == typeid(n)) << endl;




	return 0;
}








