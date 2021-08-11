//AIM : To implement Merge Sort
#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define l long
#define int long long
#define vi vector<int>
#define pb push_back
#define el cout<<"\n"
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)


void mergeHalves(vi &v, int leftStart, int leftEnd, int rightStart, int rightEnd)
{
	int left = leftStart;
	int right = rightStart;
	vi sortedArray;

	while (left <= leftEnd && right <= rightEnd)
	{
		if (v[left] < v[right])
		{
			sortedArray.pb(v[left++]);
		}
		else
		{
			sortedArray.pb(v[right++]);
		}
	}

	if (left > leftEnd)
	{
		while (right <= rightEnd)
		{
			sortedArray.pb(v[right++]);
		}
	}

	if (right > rightEnd)
	{
		while (left <= leftEnd)
		{
			sortedArray.pb(v[left++]);
		}
	}
	int index = 0;
	for (int i = leftStart; i <= rightEnd; i++)
	{
		v[i] = sortedArray[index++];
	}

}

void mergeSort(vi &v, int start, int end)
{
	if (start >= end) return;
	int mid = (start + end) / 2;

	mergeSort(v, start, mid);
	mergeSort(v, mid + 1, end);
	mergeHalves(v, start, mid, mid + 1, end);

}


vi mergeSort(vi v)
{
	mergeSort(v, 0, v.size() - 1);
	return (v);

}


int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, i = 0, in;
	cin >> n;
	// vi a(n);
	// while (n-- != 0) {
	// 	cin >> a[i++];
	// }
	vi a{2, 6, 1, 4, 1, 7, 8, 23};
	vi SortedArray = mergeSort(a);

	print(SortedArray); el;

	return 0;
}