//Link :
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define loop(i1,c,inc) for(auto start=i1;start<=c;start+=inc)
#define l long
#define ll long long
#define vi vector<int>
#define el cout<<endl

vi min_ele_sum(vi v,int k,int &count){		
	vi::iterator start=v.begin();
	vi::iterator end=v.end();
	vi::iterator found;
	int sum=*start;
	bool isFound=false;

	while(start!=v.end()){
			
			found=


		
		start=start+1;
		sum+=*start;
		count++;
	}
	if(isFound){
		v.erase(v.end());
		v.erase(v.begin(),start);
	}
	else{
		count=-1;
	}
	return(v);

}



int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vi n={1,3,4,12,19};
	int c=1;
	n=min_ele_sum(n,23,c);
	if(c==-1){
		cout<<c<<endl;
	}
	else{
		print(n); el;
		cout<<c<<endl;
	}


	return 0;
}