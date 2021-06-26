// CPP program to find max xor sum
// of 1 to n using atmost k numbers
#include <bits/stdc++.h>
using namespace std;
void FIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
// To return max xor sum of 1 to n
// using at most k numbers
int maxXorSum(int n, int k)
{
    if (k == 1)
        return n;

    int res = 1;
    while (res <= n)
        res <<= 1;
    return res - 1;
}

// Driver program
int main()
{
    FIO();
    int n = 4, k = 3;
    cout << maxXorSum(n, k);
    return 0;
}