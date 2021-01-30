#include<bits/stdc++.h>
using namespace std;
#define loop(s,e,i) for(auto l=s;l<=e;l+=i)

int main(){
	int a[10];
	int it=0;
	loop(1,10,1){
		a[it]=it;
		it++;
	}

	for(int n:a){
		cout<<n<<" ";
	}
	cout<<endl;
	return 0;
}