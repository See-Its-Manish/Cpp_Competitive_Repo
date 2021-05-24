//AIM :
#include<bits/stdc++.h>
using namespace std;

#define x 				first
#define y				second
#define pb 				push_back
#define vi 				vector<int>
#define int 			long long int
#define endl 			"\n"
#define all(v)			v.begin(),v.end()
#define print(v) 		for(auto &n:v) cout<<n<<" "
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



int32_t main() {
	FIO();

	// Map Stores <key,value> pair
	map<int, int> mp;
	cout << sizeof(mp) << endl;	// 24
	// This gives size of the corresponding object but not the number of elements.

	// Insertions
	mp['a'] = 65;
	mp['b'] = 66;
	mp['c'] = 67;
	mp.insert(pair<char, int>('z', 100));
	mp.insert({'l', 12});
	mp.emplace('m', 33);

	//Printing
	for (auto &p : mp)	// Type of p --> pair<int,int>
	{
		cout << char(p.x) << " " << p.y << endl;
	}

	mp.erase('c');
	auto x = mp.begin();
	x++;
	mp.erase(x);

	map<int, int>::iterator it ;
	for (it = mp.begin(); it != mp.end(); it++)
	{
		cout << it->x << " " << it->y << endl;
	}

	auto lb = mp.lower_bound('b');
	cout << lb->y << endl;
	cout << mp.count('c') << endl;
	cout << mp.count('a') << endl;
	mp['a']++;
	if (mp.find('c') == mp.end())
	{
		// nothing found
	}
	else
	{
		// found
	}



	return 0;
}








