#include<iostream>
using namespace std;

int main(){
	int A[]={5,4,7,8,9,10};
	for(int i=1;A.size();i++){
		int key=A[i];
		int j=i-1;

		while(j>=0&&key>A[j]){
			A[j+1]=A[j];
			j--;
		}
		A[j]=key;
	}

	cout<<"Sorted Array: ";
	for(int n: A){
		cout<<n<<" ";
	}



	return 0;
}