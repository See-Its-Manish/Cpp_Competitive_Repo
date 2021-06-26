/*
Link   : https://www.codechef.com/APRIL21C/problems/KAVGMAT
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


int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
	// Input
	int n, m, k;
	cin >> n >> m >> k;

	vector<vi> inputMatrix(n, vi(m));

	loop(i, 0, n)
	loop(j, 0, m)
	cin >> inputMatrix[i][j];

	// End of Input


	// Calculation of Prefix Sum Matrix
	int row = n ;
	int c = m ;

	vector<vi> prefixSumMatrix(row, vi(c));
	prefixSumMatrix[0][0] = inputMatrix[0][0];
	for (int i = 1; i < row; i++)
		prefixSumMatrix[i][0] = inputMatrix[i][0] + prefixSumMatrix[i - 1][0];
	for (int j = 1; j < c; j++)
		prefixSumMatrix[0][j] = inputMatrix[0][j] + prefixSumMatrix[0][j - 1];


	for (int i = 1; i < row; i++) {
		for (int j = 1; j < c; j++) {
			prefixSumMatrix[i][j] = prefixSumMatrix[i - 1][j] + prefixSumMatrix[i][j - 1]
			                        - prefixSumMatrix[i - 1][j - 1] + inputMatrix[i][j];

		}
	}

	//End of Calculation of Prefix Sum Matrix



	// Process

	int max_Size_Matrix = min(row, c);
	int worthy_matrix = 0;

	loop(it, 1, max_Size_Matrix + 1)
	{

		for (int i = it - 1; i < row; i++)
		{
			for (int j = it - 1 ;  j < c; j++)
			{
				int to_compare = k * it * it;
				int p = i - (it - 1);
				int q = j - (it - 1);
				int r = i;
				int s = j;
				int sum;
				if (p == 0 && q == 0)
					sum = (prefixSumMatrix[r][s]);
				else if (p == 0)
					sum = (prefixSumMatrix[r][s] - prefixSumMatrix[r][q - 1]);

				else if (q == 0)
					sum =  (prefixSumMatrix[r][s] - prefixSumMatrix[p - 1][s]);

				else
					sum = (prefixSumMatrix[r][s] - (prefixSumMatrix[r][q - 1] + prefixSumMatrix[p - 1][s]) + prefixSumMatrix[p - 1][q - 1]);


				if (sum >= to_compare)
					worthy_matrix++;

			}

		}


	}

	// End of Process

	cout << worthy_matrix << endl;
}


int32_t main() {
	FIO();
	int t;
	cin >> t;
	while (t--)
		solve();


	return 0;

}



