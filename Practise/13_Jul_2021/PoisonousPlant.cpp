#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int> v;
	for(auto i=0;i<10;i++){
		v.push_back(i);
	}	

	v.erase(v.begin()+1);

	for(int n:v){
		cout<<n<<" ";
	}
	cout<<endl;


	

	return 0;
}