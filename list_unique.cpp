#include<bits/stdc++.h>
using namespace std;

bool compare(char a, char b){

	return((int)a==(int)b);
}

int main(){

	// SORITNG JAROORI HA
	
	list<double> ll={2.1, 2.33, 3.2, 3.1, 4.44, 3.09,
						4.56};

	ll.unique(compare);    //  auto-update

	for(auto it:ll){
		cout<<it<<", ";
	} 

	return 0;
}