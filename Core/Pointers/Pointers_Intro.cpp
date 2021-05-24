//AIM : Pointers intro
#include<bits/stdc++.h>
using namespace std;

#define x 				first
#define y				second
#define pb 				push_back
#define vi 				vector<int>
#define int 			long long int
#define endl 			"\n"
#define rev(v) 			reverse(v.begin(), v.end())
#define sort(v) 		sort(v.begin(),v.end())
#define print(v) 		for(auto n:v) cout<<n<<" "
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))

int max(int a, int b)
{
	return a > b ? a : b;
}
int min(int a, int b) {return a > b ? b : a;}
int __gcd(int a, int b) {return b == 0 ? a : __gcd(b, a % b);}

void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


int32_t main() {
	FIO();

	int* p1 = NULL;
	int* p2  = NULL;

	// We define data type of pointers for pointer arithematics and dereferencing
	int a = 10;
	void* p = &a;


	// Dereferencing pointers (also void pointers)

	cout << *((int*)p) << endl;

	char ch = 'A';
	p = &ch;
	cout << *((char*)p) << endl;

	*((char*) p) = 'B';
	cout << *((char*) p) << endl;

	// malloc, calloc, realloc
	// malloc  --->  returns void pointer
	long long* pm;

	void* v = malloc(sizeof(long long));
	pm = ((long long*)v);
	*pm = 10;
	cout << *pm << endl;


	return 0;
}







