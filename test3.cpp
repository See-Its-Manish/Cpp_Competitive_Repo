#include<iostream>
#include <stdio.h>
using namespace std;
void getch(){
	cin.get();
}
int main(){
		int roll_no;
		char name[20];
		cout<<"Enter your roll no: ";
		cin>>roll_no;
		getch();
		cout<<"Enter Your name: ";
		gets(name);
		cout<<"\nALL INPUTS ARE DONE!!";
		cout<<"\nYour Roll Number is "<<roll_no<<" and name is "; puts(name);
	return 0;
}