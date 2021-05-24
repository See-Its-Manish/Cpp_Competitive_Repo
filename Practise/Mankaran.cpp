#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t, n, x, k;
	cin >> t;
	while (t--) {
		cin >> n >> x >> k;
		vector <long long> v1;
		if (n % 2 != 0) {
			for (int i = 0; i * k < n + 2; i++)
				v1.push_back(i * k);
		}
		// else {
		// 	// for (int i = 0; i * k < n + 2; i++) {
		// 	// 	v1.push_back(i * k);
		// 		v1.push_back((i * k) + 1);
		// 	}
		// }
		/*for(int i=0;i<v1.size();i++){
		    cout<<v1[i]<<" ";
		}*/
		// bool find = false;
		// for (int i = 0; i < v1.size(); i++) {
		// 	if (v1[i] == x) {
		// 		cout << "YES" << endl;
		// 		find = true;
		// 		break;
		// 	}
		// }
		// if (!find)
		// 	cout << "NO" << endl;
	}
}