//Link :
#include<bits/stdc++.h>
using namespace std;

vector<int> sta(string s){
	vector<int> v;
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='0'){
			v.push_back(0);
		}
		else{
			v.push_back(1);
		}
	}
		return(v);

}




vector<int> ita(int n){
		vector<int> toReturn;
		if(n==0){
			toReturn.resize(4,0);
		}
        
        while(n>0){
        toReturn.push_back(n%10);
        n=n/10;
        }
        reverse(toReturn.begin(), toReturn.end());
        return(toReturn);
    
}

int main(){
	// vector<int> v=ita(0101);
	// for(int n:v){
	// 	cout<<n<<" ";
	// }
	// int n;
	// cin>>n;
	// cout<<endl<<n<<endl;
	string str="00001111";
	std::vector<int> n=sta(str);
	for(int v:n){
		cout<<v<<" ";
	}

	return 0;
}