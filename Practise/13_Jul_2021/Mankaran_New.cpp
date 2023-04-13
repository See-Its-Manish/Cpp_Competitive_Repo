#include<bits/stdc++.h>
using namespace std;

void FIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int repeat(string s , int y) {
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }
    return sum * y;
}

int super(int a, int n)
{

    // Base Case
    if (n == 1)
    {
        return a;
    }

    // Self Work
    int len = int32_t(log10(a)) + 1;
    int sum = 0;
    while (len--)
    {
        int r =  a % 10;
        sum += r;
        a /= 10;
    }

    len = int32_t(log10(sum)) + 1;
    // Recursive Hypothesis
    return super(sum, len);

}

int main() {
    FIO();

    string n;
    int k;
    getline(cin, n);
    cin >> k;
    cin >> n >> k;

    int rep_num = repeat(n, k);
    cout << rep_num << endl;
    cout << super(rep_num, int(log10(rep_num)) ) << endl;
}