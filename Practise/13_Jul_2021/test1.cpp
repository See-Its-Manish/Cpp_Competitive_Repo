//Link :
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define l long
#define ll long long
#define pb push_back
#define pp(v) pop_back(v)
#define vi vector<int>



int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::vector<int> v={7,8, 19, 7, 8, 7, 10, 20};
	
	sort(v);

	print(v);

	return 0;
}