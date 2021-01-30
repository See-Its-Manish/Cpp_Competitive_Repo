//Link :
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back



int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//Code here!

	int t;
	cin>>t;
	while(t--!=0){
		int n,k,a;
		cin>>n;
		k=n; 
		vi v;
		while(k--!=0){
			cin>>a;
			v.pb(a);
		}
		k=n;
		for(int i=1;i<k;i++)
			v[i]+=v[i-1];

		int days=0; int noOfPeopleKnow=1;
		do{
			days++;
			if(days==1){
				noOfPeopleKnow=1+noOfPeopleKnow*v[noOfPeopleKnow-1];
			}
			else{
				noOfPeopleKnow=noOfPeopleKnow*v[noOfPeopleKnow-1];
			}

		}while(noOfPeopleKnow<v.size());

		
		cout<<days<<endl;


	}

	return 0;
}