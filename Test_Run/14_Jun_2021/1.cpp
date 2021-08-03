#include <iostream>
using namespace std;

void FIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


class Node
{
public:
	int data;
	Node *next;
};
void print(Node *n)
{
	while (n != NULL)
	{
		cout << n->data << " ";
		n = n->next;
	}
}
void del_at_beg(Node* head)
{
	Node *temp = head;
	head = head->next;
	delete (temp);
}
// void delLast(Node *head, int key)
// {
//     Node *temp;
//     Node *prevnode;
//     temp = head;
//     while (temp->next != NULL)
//     {
//         prevnode = temp;
//         temp = temp->next;
//     }
//     prevnode->next = NULL;
//     delete (temp);
// }
int main()
{
	FIO();
	Node *head = NULL;
	Node *second = NULL;
	Node *third = NULL;
	head = new Node();
	second = new Node();
	third = new Node();
	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;
	del_at_beg(head);
	print(head);
	return 0;
}