#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
		bool prime=true;

	for(int i=2;i*i<=n;i++){
			if(n%i==0){
				prime=false;
				break;
			}
		}

		return(prime);
}

bool compPrime(int a, int b ){
	
		bool aprime=isPrime(a);
		bool bprime=isPrime(b);
		
		return(aprime==bprime);

}


int main(){

	list<int> ll={2,3,5,6};
	
	ll.unique(compPrime);

	for(auto n:ll){
		cout<<n<<" ";
	}

	cout<<endl;

	return 0;
}