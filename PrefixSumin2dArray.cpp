// AIM: 1)To input a 2d matrix and print its prefix sum matrix
//		2)To find the sum of subset of a matrix
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define l long
#define ll long long
#define vi vector<int>

//We are taking 1 based indexing


// This Function gives sum of sub Matrix in given Matrix v
int sumOfSubMatrix(vector<vi> PS, int p, int q, int r, int s)
{
	p--; q--; r--; s--;
	if (p == 0 && q == 0) {
		return (PS[r][s]);
	}
	if (p == 0) {
		return (PS[r][s] - PS[r][q - 1]);
	}
	else if (q == 0) {
		return (PS[r][s] - PS[p - 1][s]);
	}
	else {
		return (PS[r][s] - (PS[r][q - 1] + PS[p - 1][s]) + PS[p - 1][q - 1]);
	}
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int r, c;
	cin >> r >> c;
	vector<vector<int>> inputMatrix;
	vector<vector<int>> prefixSumMatrix;

	// INPUT
	for (int i = 0; i < r; i++) {
		vector<int> in1, in2; int n;
		for (int j = 0; j < c; j++) {
			cin >> n;
			in1.push_back(n);
			in2.push_back(0);
		}
		inputMatrix.push_back(in1);
		prefixSumMatrix.push_back(in2);
	}

	// Process
	prefixSumMatrix[0][0] = inputMatrix[0][0];
	for (int i = 1; i < r; i++)
		prefixSumMatrix[i][0] = inputMatrix[i][0] + prefixSumMatrix[i - 1][0];
	for (int j = 1; j < c; j++)
		prefixSumMatrix[0][j] = inputMatrix[0][j] + prefixSumMatrix[0][j - 1];


	for (int i = 1; i < r; i++) {
		for (int j = 1; j < c; j++) {
			prefixSumMatrix[i][j] = prefixSumMatrix[i - 1][j] + prefixSumMatrix[i][j - 1]
			                        - prefixSumMatrix[i - 1][j - 1] + inputMatrix[i][j];

		}
	}

	// Printing of PrefixSumArray
	for (auto v : prefixSumMatrix) {
		print(v);
		cout << endl;
	}

	// cout << sumOfSubMatrix(prefixSumMatrix, 1, 1, 2, 1);

	return 0;
}