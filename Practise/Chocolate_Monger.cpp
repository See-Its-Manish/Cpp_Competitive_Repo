/*
Link   : https://www.codechef.com/COOK128C/problems/CM164364
Author : seeitsmanish
*/
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

typedef pair<int, int> pi;


int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ff < b.ff);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


void solve()
{
	int n, x;
	cin >> n >> x;

	vi a(n);
	loop(i, 0, n)
	{
		cin >> a[i];
	}

	sort(a);

	priority_queue < pi > pq;
	int freq = 1;
	loop(i, 1, n)
	{
		if (a[i] != a[i - 1])
		{

			pq.push(make_pair(freq, a[i - 1]));
			freq = 1;
		}
		else
		{
			freq++;
		}
	}
	pq.push(make_pair(freq, a[n - 1]));


	pair<int , int > p ;

	bool isUnity = false;

	while (x > 0 and pq.size() > 0)
	{
		p = pq.top();

		if (p.ff == 1)
		{
			isUnity = true;
			break;
		}
		if (x >= p.ff)
		{
			x -= (p.ff - 1);
			pq.pop();
			p.ff = 1;
			pq.push(p);
		}
		else
		{
			break;
		}
	}

	if (isUnity)
	{
		int size = pq.size();

		if (size >= x)
		{
			cout << (size - x) << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
	else
		cout << pq.size() << endl;




}


int32_t main() {
	FIO();
	int t;
	cin >> t;
	while (t--)
	{
		solve();

	}

	return 0;
}



