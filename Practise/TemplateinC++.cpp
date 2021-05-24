#include<iostream>
using namespace std;

template <typename T>
T getMax(T a, T b){
	
return(a>b?a:b);

}

int main(){
	
cout<<getMax<int>(3,7)<<endl;

	return 0;
}