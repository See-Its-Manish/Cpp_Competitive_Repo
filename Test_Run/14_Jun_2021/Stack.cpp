#include<bits/stdc++.h>
using namespace std;

void FIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
// Static Stack (Capacity is Defined)
class Stack {
	int st[10];
	int in;
public:
	Stack(): in(0) {};

	void push(int ele) {
		if (in < 0 and in >= 10) return;
		else
		{
			this->st[this->in++] = ele;
		}
	}

	void pop()
	{
		if (in <= 0) return;
		else
		{
			this->in--;
		}
	}
	int top()
	{
		return this->st[this->in - 1];
	}


};

int main() {
	FIO();

	Stack s;
	s.push(10);
	s.push(11);
	s.push(9);
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;

	return 0;
}



