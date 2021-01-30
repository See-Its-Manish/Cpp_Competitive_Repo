#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	bool isPrime=true;
	for(int i=2;i*i<n;i++){
		if(n%i==0){
			isPrime=false;
			break;
		}
	}
	if(isPrime){
		cout<<"PRIME NUMBER!!";
	}
	else{
		cout<<"NOT PRIME!!";
	}


	return 0;
}