#include<iostream>
using namespace std;
//#define add(l,b) strcat(a,b);
#define add(l,b,c) l+b; cout<<c;

int main(){
	char a='A';
	char b='!';
	cout<<add(a,b,'B');

	int m=10, n=12;
	cout<<endl<<add(m,n,'K');

	typedef double money;
	money x=12.0921;
	money y=12.0921;
	cout<<endl<<add(x,y,'A');
	return 0;
}