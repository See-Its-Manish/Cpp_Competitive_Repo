#include<bits/stdc++.h>
using namespace std;
void FIO()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


class Node {
public:
	int data;
	Node* next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

class LL {
public:
	Node* head;
	Node* tail;

	LL() {
		this->head = this->tail = nullptr;
	}

	void push(int data)
	{	// if overflow
		Node* np = new Node(data);
		if (np == NULL)
		{
			cout << "OVERFLOW!!";
			return;
		}
		if (head == nullptr)
		{
			head = tail = np;
		}
		tail->next = np;
		tail = np;

	}

	void pop()
	{
		if (head == nullptr) {
			cout << "UNDERFLOW!!" << endl;
			return;
		}
		Node* temp = head;
		head = head->next;
		delete temp;
	}


	void display()
	{
		if (head == nullptr)
		{
			cout << "head->tail->NULL" << endl;
			return;
		}
		Node* temp = head;
		while (temp != nullptr)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "NULL" << endl;

	}

};

// This code is contributed by anmolgautam818

int main() {
	FIO();

	// Code Starts from here!

	LL ll;
	ll.push(19);
	ll.push(18);
	ll.push(10);
	ll.display();
	ll.pop();
	ll.display();
	ll.pop();
	ll.pop();
	ll.display();
	ll.pop();

	for (int i = 0; i <= 100; i += 10)
	{
		ll.push(i);
	}

	ll.display();
	return 0;
}



