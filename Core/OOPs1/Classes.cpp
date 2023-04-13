#include<bits/stdc++.h>
using namespace std;


void FIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

class Product {

private:
	string name; 	// Data Members
	int cost;

public:

	Product() {}	// Default Constructor

	Product(string name, int cost)
	{
		this->name = name;
		this->cost = cost;
	}

	Product(Product &p)	// Copy Constructor
	{
		cout << "Copy Constructor called" << endl;
		this->name = p.name;
		this->cost = p.cost;
	}

	void display() {
		cout << name << " " << cost << endl;
	}

	void setter(string n, int c)
	{
		this->name = n;
		this->cost = c;
	}

	Product* pointer()
	{
		return this;
	}

};

int main(int args, const char* argv[]) {
	FIO();

	Product iphone("Iphone 12 Pro", 1000000);
	Product shirt("Blue Men Shirt", 5000);

	iphone.display();
	shirt.display();

	Product Pant("Blue Denim", 2000);
	Product Jeans(Pant);
	Jeans.display();

	cout << sizeof(iphone) << endl;
	cout << sizeof(shirt) << endl;

	Product* p = iphone.pointer();
	p->display();
	p->display();
	p->setter("12 pro Max", 1500000);
	p->display();
	(*p).display();



	return 0;
}








