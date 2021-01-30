#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
void getch()
{
	cin.get();
}

//DECLARATION OF CLASS
class books {
	int BookNo;
	char BookName[20];
	books *next;

public:
	books(int BookNo, char BookName[]) {
		this->BookNo = BookNo;
		strcpy(this->BookName, BookName);
		this->next = NULL;
	}
	void push();
	void pop();
	void display();

}*top;

//FUNCTION TO CHECK WHEATHER THE STACK IS EMPTY
bool isempty()
{
	if (top == NULL) return true;
	else return false;
}

// MEMBER FUNCTION To PUSH BOOKS INTO STACK OF BOOK
void books::push()
{
	int BookNo;
	char BookName[50];
	cout << "Enter Book Number: ";
	cin >> BookNo;
	getch();
	cout << "Enter Book Name: ";
	gets(BookName);
	books *np = new books(BookNo, BookName);
	if (isempty()) top = np;
	else
	{
		np->next = top;
		top = np;
	}
	cout << "\nBook added successfully!!";
}

//MEMBER FUNCTION TO POP THE TOP BOOK FROM THE STACK OF BOOK
void books::pop() {
	if (isempty())
	{
		return ;
	}
	else
	{
		books *temp = top;
		top = top->next;
		delete(temp);
	}
	cout << "\nBook deleted successfully!!";
}

//MEMBER FUNTION TO DISPLAY THE STACK OF BOOKS
void books::display()
{
	if (isempty())
	{
		cout << "\nStack is Empty!!";
		return ;
	}
	books *temp;
	temp = top;
	cout << "\nNow, the Stack is:\n\n";
	while (temp)
	{
		cout << temp->BookNo << endl;
		puts(temp->BookName);
		cout << "▼" << endl << "▼" << endl;
		temp = temp->next;
	}
	cout << "NULL";

}

int main() {
	int ch;
	char c[] = "NotAssigned";
	books book(0, c);
	top = NULL;
start:
	while (1) {
		cout << "Choose From Menu: ";
		cout << "\n1.Push Book";
		cout << "\n2.Pop Book";
		cout << "\n3.Display Books";
		cout << "\n4.Exit";
		cout << "\nEnter Your Choice: ";
		cin >> ch;
		getch();
		switch (ch)
		{
		case 1:
		{
			book.push();
			system("clear");
			book.display();
			break;
		}

		case 2:
		{
			book.pop();
			system("clear");
			book.display();
			break;
		}

		case 3:
		{
			book.display();
			break;
		}

		case 4:
		{
			exit(0);
		}

		default:
		{
			cout << "INVALID OPTION!!\n\n";
			cout << "Press any key!\n\n";
			getch();
			goto start;
		}
		}
		getch();
		system("clear");

	}




	return 0;
}