//AIM :
#include<bits/stdc++.h>
using namespace std;

void FIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


class Counter
{
protected:
	int count;

public:
	Counter() : count(0) {cout << "Base class constructor 1 called" << endl;}
	Counter(int c) : count(c) {cout << "Base class constructor 2 called" << endl;}

	int get_count() const {
		return this->count;
	}

	Counter operator ++ () {
		return Counter(++this->count);
	}

};


class CountDn : public Counter {
public:
	Counter operator --() {
		return Counter(--this->count);
	}

};






int main() {
	FIO();

	CountDn c;
	cout << c.get_count() << endl;
	--c;



	return 0;
}








