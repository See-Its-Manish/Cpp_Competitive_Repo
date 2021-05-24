//Link :
#include<bits/stdc++.h>
using namespace std;
// #define sort(v) sort(v.begin(),v.end())
// #define sortq(v) sort(v.front(),v.back())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define l long
#define ll long long
#define vi vector<int>

void sortq(queue<int> &toSort){

	for(int)
}

vi solve(vi arr, vi queries) {

    vi ans;
    for(int n:queries){
        vi v;
        queue<int> q;
        for(int i=0;i<arr.size();i++){
            if(i<n){
                q.push(arr[i]);
            }
            else{
                
                q.pop();
                q.push(arr[i]);
            }
            sortq(q);
            v.push_back(q.back());
        }
        sort(v.begin(),v.end());
        ans.push_back(v[0]);
    }
    
    return (ans);

}



int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n,q;
	cin>>n>>q;
	vi ar;
	vi qq;
	while(n--!=0){
		int in1;
		cin>>in1;
		ar.push_back(in1);
	}
	while(q--!=0){
		int in2;
		cin>>in2;
		qq.push_back(in2);
	}

	vi toDisplay=solve(ar,qq);

	print(toDisplay);
	

	return 0;
}