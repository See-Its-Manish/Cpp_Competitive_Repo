//Link : https://classroom.codingninjas.com/app/classroom/me/6698/content/98937/offering/1105572/problem/6009
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define el cout<<"\n"
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	int strlen = s.length();
	if (strlen == 0) {
		cout << 13 << " " << 13 << " " << 13 << " " << 13 << endl;
		return (0);
	}
	vi p(14, 0), k(14, 0), h(14, 0), t(14, 0);
	int countp = 0, countk = 0, counth = 0, countt = 0;
	bool isRepeated = false;
	for (int i = 0; i < strlen - 2; i += 3) {
		string toC = s.substr(i + 1, i + 2);
		int toComp = stoi(toC);
		if (s.at(i) == 'P') {
			if (p[toComp] == 1) {
				isRepeated = true;
				break;
			}
			else {
				p[toComp]++;
				countp++;
			}
		}

		else if (s.at(i) == 'K') {
			if (k[toComp] == 1) {
				isRepeated = true;
				break;
			}
			else {
				k[toComp]++;
				countk++;
			}
		}

		else if (s.at(i) == 'H') {
			if (h[toComp] == 1) {
				isRepeated = true;
				break;
			}
			else {
				h[toComp]++;
				counth++;
			}
		}

		else if (s.at(i) == 'T') {
			if (t[toComp] == 1) {
				isRepeated = true;
				break;
			}
			else {
				t[toComp]++;
				countt++;
			}
		}

	}

	if (isRepeated) {
		cout << "ERROR" << endl;
		return (0);
	}

	cout << (13 - countp) << " " << (13 - countk) << " " << (13 - counth) << " " << (13 - countt) << endl;

	return 0;
}