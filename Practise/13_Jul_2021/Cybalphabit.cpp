//Link: https://www.codechef.com/problems/CAB
#include <bits/stdc++.h>
using namespace std;

vector<int> DTB(int n){
    vector<int> v;
    while(n>0){
        v.push_back((int)n%2);
        n=(int)n/2;
    }
     reverse(v.begin(), v.end());

    return(v);
}

vector<int> toConvert(vector<int>  v, int size){

		int i=0;
	while(v.size()!=size){

		while(v[i]==0){
			i++;
		}
		v[i]=v[i]-1;
		v.insert(v.begin()+i,v[i]);
	}

	return(v);


}

int main() {
	int t;
	cin>>t;
	
	while(t--!=0){
	    
	    int n,k;
	    cin>>n>>k;
	    
	    if(n>k){            // if length is more than sum
	        cout<<-1<<endl;
	        continue;
	    }
	    
	    if(n==k){           // if length is same as sum
	        while(n--!=0) cout<<"a";
	        cout<<endl;
	        continue;
	    }
	    
	    vector<int> v=DTB(k);
	    int o=0;
	    for(auto b:v){
	        if(b==1){
	            o++;   
	        }
	    }
	    
	    if(n<o){
	        cout<<-1<<endl;
	        continue;
	    }
	    
	    char ch[26];
	    int i=0;
	    for(char c='a';c<='z';c++){
	        ch[i++]=c;
	    }
	    
	    reverse(v.begin(),v.end());
	    
	    if(o==n){
	        string s;
	        for(int it=0;it<v.size();it++){
	            if(v[it]==1){
	                s.push_back(ch[it]);
	            }
	        }
	        
	        cout<<s<<endl;
	            continue;
	        
	    }
	    
	    vector<int> p;
	   
	    
	    for(int it1=0;it1<v.size();it1++){
	        if(v[it1]==1){
	                p.push_back(it1);
	            }
	    }
	    
	    
	    p=toConvert(p,n);
	
	    
	    for(int q:p){
	        cout<<ch[q];
	    }
	    cout<<endl;
	    
	    
	}
	
	return 0;
}
