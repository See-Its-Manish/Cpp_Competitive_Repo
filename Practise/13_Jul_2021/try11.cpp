//Link :
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define li long int
#define ll long long
//#define vi vector<int>



int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin>>t;
	while(t--!=0){
		ll int n,k;
		cin>>n>>k;
		int size=n;
		vector<li> v; v.reserve(size);
		while(n--!=0){
			int h;
			cin>>h;
			v.push_back(h);
		}

		sort(v); 
		rev(v);
		
		ll int t1=k;
		ll int t2=k;
		int i=0; int count=0;
		bool p=false;
		while(i<v.size()){
			int t=v[i++];
			if(t1>0){
				t1-=t;
				count++;
				continue;
			}
			if(t2>0){
				t2-=t;
				count++;
				continue;
			}
			if(t1<=0 && t2<=0){
				p=true;
				break;
			}

		}
		if(p){
			cout<<count<<endl;
		}
		else{
			cout<<-1<<endl;
		}

	}

	return 0;
}