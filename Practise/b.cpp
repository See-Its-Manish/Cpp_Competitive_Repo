#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define sort(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define endl "\n"
#define int long long int

void FIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int32_t main()
{
    FIO();
    int i = INT_MAX;
    cout << "MAX: " << i;
    int a = 1LL * 2147483647 + 100000; // Integer Overflow
    int b = 2147483647;
    b  = b + 100000; // No Overflow
    int c = 0;
    c = 1LL * 2147483647 + 100000; //Integer Overflow
    cout << endl << "A: " << a;
    cout << endl << "B: " << b;
    cout << endl << "C: " << c << endl;

    cout << ((int)pow(2, 100) % (int)(1e9 + 7));

    return 0;
}