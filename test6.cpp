#include<iostream>
using namespace std;

int main(){
	char ch;
	for(int i=0;i<256;i++){
		ch=(char)i;
		cout<<i<<"="<<ch<<endl;
	}
	return 0;
}