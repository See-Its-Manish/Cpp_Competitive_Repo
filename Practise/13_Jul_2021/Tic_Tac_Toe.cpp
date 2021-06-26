/*
Link   : https://www.codechef.com/MAY21C/problems/TCTCTOE
Author : seeitsmanish
*/
#include<bits/stdc++.h>
using namespace std;

#define x 				first
#define y				second
#define pb 				emplace_back
#define vi 				vector<int>
#define pii				pair<int,int>
#define int 			long long int
#define endl 			"\n"
#define flush			cin.get()
#define all(v)			v.begin(), v.end()
#define print(v) 		for(auto n:v) cout<<n<<" "
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))


int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a > b ? b : a;}
int __gcd(int a, int b) {return b == 0 ? a : __gcd(b, a % b);}

void FIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

struct Grid
{
	pii a = {0, 0}, b = {0, 1}, c = {0, 2};
	pii d = {1, 0}, e = {1, 1}, f = {1, 2};
	pii g = {2, 0}, h = {2, 1}, i = {2, 2};

} B;


const int n = 3;
vector<vector<char>> v(n, vector<char>(n));
bool check(pii& a, pii& b, pii& c)
{
	return (v[a.x][a.y] == v[b.x][b.y] and v[a.x][a.y] == v[c.x][c.y] and v[a.x][a.y] != '_');
}

class Grid_stats
{
public:
	bool c1 = check(B.a, B.d, B.g);
	bool c2 = check(B.b, B.e, B.h);
	bool c3 = check(B.c, B.f, B.i);
	bool r1 = check(B.a, B.b, B.c);
	bool r2 = check(B.d, B.e, B.f);
	bool r3 = check(B.g, B.h, B.i);
	bool d1 = check(B.a, B.e, B.i);
	bool d2 = check(B.c, B.e, B.g);

	int get_t()
	{
		return (c1 + c2 + c3 + r1 + r2 + r3 + d1 + d2);
	}
};


int checkR()
{
	return (check(B.a, B.b, B.c) + check(B.d, B.e, B.f) + check(B.g, B.h, B.i));
}
int checkC()
{
	return (check(B.a, B.d, B.g) + check(B.b, B.e, B.h) + check(B.c, B.f, B.i));
}
int checkD()
{
	return (check(B.a, B.e, B.i) + check(B.c, B.e, B.g));
}

bool isSpecial(Grid_stats& a)
{
	// 90 degree cases
	if ( a.c1 and a.r1)
		return true;
	else if (a.c1 and a.r3)
		return true;
	else if (a.r1 and a.c3)
		return true;
	else if (a.r3 and a.c3)
		return true;

	// 45 degree cases

	else if ( a.c1 and a.d1)
		return true;
	else if (a.d2 and a.c3)
		return true;
	else if (a.d1 and a.r3)
		return true;
	else if (a.d2 and a.r3)
		return true;
	else if (a.c3 and a.d1)
		return true;
	else if (a.c1 and a.d2)
		return true;
	else if (a.r1 and a.d2)
		return true;
	else if (a.r1 and a.d1)
		return true;

	// T cases
	else if (a.c1 and a.r2)
		return true;
	else if (a.r2 and a.c3)
		return true;
	else if (a.c2 and a.r3)
		return true;
	else if (a.r1 and a.c2)
		return true;

	return false;



}


void solve()
{
	// Input
	loop(i, 0, n)
	{
		loop(j, 0, n)
		{
			cin >> v[i][j];
		}
	}
	// Count of X,O,_
	int X = 0;
	int O = 0;
	int _ = 0;
	loop(i, 0, n)
	{
		loop(j, 0, n)
		{
			switch (v[i][j])
			{
			case 'X' : {X += 1; break;}
			case 'O' : {O += 1; break;}
			case '_' : {_ += 1; break;}
			}
		}
	}

	Grid_stats g;

	int noOfWins = g.get_t(); // (checkR() + checkD() + checkC());


	// checking for special case

	if (_ == 0 and noOfWins == 2)
	{
		if (isSpecial(g))
		{
			cout << 1 << endl;
			return;
		}
	}

	// First We have to Ensure there is no cheating
	/*	How cheating can be done?
		1)If some player has played more than once in his turn ---> abs(X-O) >1.
		2)Both players can't win simultaneously.
	*/


	bool ischeated = 0;
	if (abs(X - O) > 1  or (O - X) == 1)
	{
		ischeated = 1;
	}
	else if ( noOfWins > 1)
	{
		ischeated = 1;
	}
	if (ischeated)
	{
		cout << 3 << endl;
		return;
	}


	// Now It is ensured that there is no cheating
	/*
		Now either the game will proceed or someone has won or game is drawn
	*/
	// First we will check if some has won or not
	if (noOfWins == 1)
	{
		cout << 1 << endl;
		return;
	}
	//If code Proceeds no one has won
	if (_ == 0)
	{
		cout << 1 << endl;
		return;
	}
	//if code still proceeds than there is a position left
	cout << 2 << endl;

}


int32_t main() {
	FIO();
	int t;
	cin >> t;
	flush;
	while (t--)
		solve();

	return 0;
}



