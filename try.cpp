//Link :
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())

int main(){
	vector<int> v={7, 8, 19, 7, 8, 7, 10, 20};
	sort(v);

	for(int n:v){
		cout<<n<<" ";
	}

	return 0;
}