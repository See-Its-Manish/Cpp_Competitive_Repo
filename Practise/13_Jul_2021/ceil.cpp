//AIM : To find Ceil value of function
#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define sort(v) sort(v.begin(),v.end(),comp)
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define int long long
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define el cout<<"\n"
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)
int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int32_t main() {
	FIO();
	float f = 1.0;
	int heroPower, heroHealth;
	int enemyPower, enemyHealth;
	cin >> heroPower >> heroHealth >> enemyPower >> enemyHealth;
	int noOfRoundsOfEnemy = ceil(f * enemyHealth / heroPower);
	int noOfRoundsOfHero =  ceil(f * heroHealth / enemyPower);

	cout << "No Of Rounds in which enemy will die: " << noOfRoundsOfEnemy << endl;
	cout << "No Of Round in which Hero will die: " << noOfRoundsOfHero;
	return 0;
}