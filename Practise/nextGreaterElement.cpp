//AIM : Optimized Brut-Force to find next greater element using stack
#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define sort(v) sort(v.begin(),v.end())
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
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
vi nextGreaterElement(vi a)
{
	stack<int> s;
	int n = a.size();
	vi nge(n);
	for (int i = n - 1; i >= 0; --i)
	{
		if (s.empty())
			nge[i] = -1;

		else if (s.size() and s.top() > a[i])
			nge[i] = s.top();

		else if (s.size() and s.top() < a[i])
		{
			while (s.size() and s.top() < a[i])
				s.pop();

			if (!s.size())
				nge[i] = -1;

			else
				nge[i] = s.top();
		}

		s.push(a[i]);
	}
	return (nge);
}


int32_t main() {
	FIO();

	int n;
	cin >> n;
	vi a(n);
	loop(0, n, 1)
	{
		cin >> a[it];
	}
	a = nextGreaterElement(a);
	print(a);

	return 0;
}




