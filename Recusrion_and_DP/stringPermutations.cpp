// Ques:
#include<bits/stdc++.h>
using namespace std;

void FIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void permutations(string str, string out) {
	if (str.size() == 0) {
		cout << out << endl;
		return;
	}
	vector<int> visited(26, 0);
	for (int i = 0; i < str.size(); i++) {
		char ch = str[i];
		if (visited[ch - 'a'] == 0) {
			visited[ch - 'a'] = 1;
			string ros = str.substr(0, i) + str.substr(i + 1);
			permutations(ros, out + ch);
		}
	}
}


void permutations_op(string &str, int i) {
	if (i == (int)str.size() - 1) {
		cout << str << endl;
		return;
	}

	vector<int> visited(26, 0);
	for (int j = i; j < str.size(); j++) {
		char ch = str[j];
		if (visited[ch - 'a'] == 0) {
			visited[ch - 'a'] = 1;
			swap(str[j], str[i]);
			permutations_op(str, i + 1);
			swap(str[j], str[i]);
		}
	}
}
int main() {
	FIO();

	int n;
	cin >> n;
	string s;
	cin >> s;
	permutations_op(s, 0);
	return 0;
}