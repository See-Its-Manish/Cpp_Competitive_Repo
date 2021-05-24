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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

struct Player
{
	int x, y;
	void display() {
		cout << this->x << " " << this->y << endl;
	}
	~Player() {
		cout << "Player Destructed" << endl;
	}
};







int32_t main() {
	FIO();

	/*
	 Smart Pointers - { All maintains a reference count except weak pointers}
	 	1) Unique Pointers - {If we have created a unique pointer no other pointer can be made to point to it.}
	 	2) Shared Pointers - {Share Pointers gives you access to share objects. }
		3) Weak Pointers   - {Can only be initialised by Shared Pointers. It is used to solve problems of dangling pointers by providing functionality of expired()}
	 */

	// Unique Pointers
	unique_ptr<Player> ptr = make_unique<Player>();
	ptr->x = 10;
	ptr-> y = 20;
	ptr->display();
	cout << "Scope Created" << endl;
	{

		unique_ptr<Player> p1 = make_unique<Player>();
		// unique_ptr<Player> p2 = p1; // Doesn't Work
	}
	cout << "Scope Ended" << endl;

	// Shared Pointers
	shared_ptr<Player> p3 = make_shared<Player>();
	shared_ptr<Player> p4 = p3;
	cout << p4.use_count() << endl;


	//Weak Pointers
	weak_ptr<Player> ptw(p3);

	cout << ptw.use_count() << endl;

	// ptw->x = 10;  // This doesn't work

	cout << ptw.expired() << endl;








	return 0;
}








