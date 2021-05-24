//AIM :
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


void print_string(const string &s)
{
	// No copies only reference
	cout << s << endl;
}

void operator new (size_t size)
{
	cout << "New Called" << endl;
	return malloc(size);
}

int32_t main() {
	FIO();

	// Code Starts here !

	// C-style Strings (Properties derived from C languange)
	// C++ expectes C-Style Strings to be constant
	char s1[] = "Manish";
	// String literals
	const char* s2 = "Manish";
	cout << s2 << endl;
	// s2[2] = 'K';	This gives error
	cout << sizeof(s1) << " " << sizeof(s2) << endl;
	char ch[10] = "Mani\0sh";
	print(ch); cout << endl;
	// size of s1 is 6 but output is 7 cause C++/C automatically inserts a Null character '\0' at end of a character array.
	char s3[10] = {'a', 'b', 'c', 'd', 'e', 'f', '\0', 'h', 'i', 'j'};
	cout << s3 << endl;
	// Ascii of \0 is 0
	char s4[10] = {'a', 'b', 'c', 'd', 'e', 0, 'h', 'i', 'j'};
	cout << s4 << endl;

	string str = "Manish";
	cout << str << " " << sizeof(str) << endl;
	str[0] = 'V';
	cout << str << endl;
	cout << str.size() << endl;

	// string str1  = "Manish" + "Sharma";	// This gives Error cause cant convert string literals(immutable) into string (mutable)
	string str2 = string("Manish") + "Sharma";
	return 0;
}







