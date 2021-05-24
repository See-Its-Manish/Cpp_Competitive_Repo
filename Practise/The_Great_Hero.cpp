//Link : https://codeforces.com/contest/1480/problem/B
#include<bits/stdc++.h>
using namespace std;
#define power first
#define health second
#define sort(v) sort(v.begin(),v.end(),comp)
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define int long long
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define endl "\n"
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)
int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.power < b.power);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int32_t main() {
	FIO();

	// power denotes power of enemy
	// health denotes health enemy
	float f = 1.0;
	int t;
	cin >> t;
	while (t-- != 0)
	{

		int heroPower, heroHealth, noOfEnemy;
		cin >> heroPower >> heroHealth >> noOfEnemy;
		vector<pair<int, int>> enemy(noOfEnemy, make_pair(0, 0));
		loop(0, noOfEnemy, 1) {
			cin >> enemy[it].power;
		}
		loop(0, noOfEnemy, 1) {
			cin >> enemy[it].health;
		}
		int itOnEnemy = 0;
		sort(enemy);
		while (itOnEnemy + 1 < noOfEnemy)
		{
			int noOfRoundsOfEnemy = ceil(f * enemy[itOnEnemy].health / heroPower);
			int noOfRoundsOfHero = ceil(f * heroHealth / enemy[itOnEnemy].power);

			if (noOfRoundsOfHero <= noOfRoundsOfEnemy)
			{
				cout << "NO";
				break;
			}
			heroHealth -= (noOfRoundsOfEnemy * enemy[itOnEnemy].power);
			if (heroHealth <= 0)
			{
				cout << "NO";
				break;
			}

			itOnEnemy++;
		}

		if (itOnEnemy + 1 == noOfEnemy)
		{
			int noOfRoundsOfEnemy = ceil(f * enemy[itOnEnemy].health / heroPower);
			int noOfRoundsOfHero = ceil(f * heroHealth / enemy[itOnEnemy].power);

			if (noOfRoundsOfHero >= noOfRoundsOfEnemy)
			{
				cout << "YES";

			}
			else
			{
				cout << "NO";
			}
		}
		cout << endl;
	}


	return 0;
}