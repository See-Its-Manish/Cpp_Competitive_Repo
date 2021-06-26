//AIM : Given a string check if it is pallindrome or not
#include<bits/stdc++.h>
using namespace std;

#define ff 				first
#define ss 				second
#define sort(v) 		sort(v.begin(),v.end())
#define print(v) 		for(auto n:v) cout<<n<<" "
#define rev(v) 			reverse(v.begin(), v.end())
#define int 			long long int
#define li 				long int
#define vi 				vector<int>
#define pb 				push_back
#define endl 			"\n"
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))


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

	string s;
	getline(cin, s);

	int size = s.length();
	if (size == 1)
	{
		cout << "Yes";
		exit(0);
	}

	int noOfOperations = floor(size / 2.0);

	bool isPallindorme = true;
	loop(i, 0, noOfOperations)
	{
		if (s[i] != s[size - i - 1])
			isPallindorme = false;
	}

	if (isPallindorme)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}



