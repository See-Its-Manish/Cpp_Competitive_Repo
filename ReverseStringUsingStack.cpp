#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
struct node{
	char data;
	node *next;

	node(char data){
		this->data=data;
		this->next=NULL;
	}
} *head;

bool isEmpty(){
	return(head==NULL);
}

void push(char ch){
	node *np=new node(ch);
	if(isEmpty()){
		head=np;
		return;
	}
	np->next=head;
	head=np;
}

void pop (){
	if(isEmpty()){
		cout<<"Stack is Empty!!";
		return;
	}
	node *temp=head;
	head=head->next;
	delete(temp);
}
char peek(){
	if(isEmpty()){
		cout<<"Stack is Empty!!";
		return '\0';
	}
	return(head->data);
}

int main(){
	head=NULL;
	string str;
	cout<<"Enter a string: ";
	cin>>str;
	for(int i=0;i<str.size();i++){
		push(str.at(i));
	}
	for(int i=0;i<str.size();i++){
		cout<<peek();
		pop();
	}



	return 0;
}