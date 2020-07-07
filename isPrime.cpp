#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	bool isPrime=true;
	time_t t1=time(&t1);
	for(int i=2;i*i<n;i++){
		if(n%i==0){
			isPrime=false;
			break;
		}
	}
	time_t t2=time(&t2);
	cout<<t2-t1<<endl;
	if(isPrime){
		cout<<"PRIME NUMBER!!";
	}
	else{
		cout<<"NOT PRIME!!";
	}


	return 0;
}