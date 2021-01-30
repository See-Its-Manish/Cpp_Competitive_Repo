#include<bits/stdc++.h>
using namespace std;

int main(){


	char ch[26];
	int a=0;
	for(char i='a';i<='z';i++){
	    ch[a++]=i;
	}

	for(auto n:ch){

		cout<<n<<" ";
	}
	cout<<endl;

	int p=1;

	string binary = std::bitset<8>(45).to_string();
	cout<<binary;


	return 0;
}