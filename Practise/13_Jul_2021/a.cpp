#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define sort(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define endl "\n"
#define int long long

void FIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
    FIO();
    int t = 0;
    cin >> t;

    while (t--)
    {
        string s[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> s[i];
        }

        int win = 0;
        int win2 = 0;
        int spaces = 0;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (s[i][j] == '_')
                    spaces++;
            }
        }

        // 1st element
        if (s[0][0] == s[0][1] && s[0][1] == s[0][2] && s[0][0] == 'X')
            win++;
        if (s[0][0] == s[1][1] && s[1][1] == s[2][2]  && s[0][0] == 'X')
            win++;
        if (s[0][0] == s[1][0] && s[1][0] == s[2][0]  && s[0][0] == 'X')
            win++;

        // 2nd Element
        if (s[0][1] == s[1][1] && s[1][1] == s[2][1]  && s[0][1] == 'X')
            win++;

        // 3rd Element
        if (s[0][2] == s[1][2] && s[1][2] == s[2][2]  && s[0][2] == 'X')
            win++;
        if (s[0][2] == s[1][1] && s[1][1] == s[2][0]  && s[0][2] == 'X')
            win++;

        // 4th Element
        if (s[1][0] == s[1][1] && s[1][1] == s[1][2]  && s[1][0] == 'X')
            win++;

        // 6th Element
        if (s[2][0] == s[2][1] && s[2][1] == s[2][2]   && s[2][0] == 'X')
            win++;



        // 1st element
        if (s[0][0] == s[0][1] && s[0][1] == s[0][2] && s[0][0] == 'O')
            win2++;
        if (s[0][0] == s[1][1] && s[1][1] == s[2][2]  && s[0][0] == 'O')
            win2++;
        if (s[0][0] == s[1][0] && s[1][0] == s[2][0]  && s[0][0] == 'O')
            win2++;

        // 2nd Element
        if (s[0][1] == s[1][1] && s[1][1] == s[2][1]  && s[0][1] == 'O')
            win2++;

        // 3rd Element
        if (s[0][2] == s[1][2] && s[1][2] == s[2][2]  && s[0][2] == 'O')
            win2++;
        if (s[0][2] == s[1][1] && s[1][1] == s[2][0]  && s[0][2] == 'O')
            win2++;

        // 4th Element
        if (s[1][0] == s[1][1] && s[1][1] == s[1][2]  && s[1][0] == 'O')
            win2++;

        // 6th Element
        if (s[2][0] == s[2][1] && s[2][1] == s[2][2]   && s[2][0] == 'O')
            win2++;

        // Main Code Starts Here

        int flag = -1;

        if (win >= 1 && win2 >= 1)
            flag = 3;

        else if ((win > 0 && win2 == 0) || (win2 > 0 && win == 0))
            flag = 1;

        else if (win == 0 && win2 == 0)
        {
            if (spaces > 0)
                flag = 2;
            else
                flag = 1;
        }

        // cout<<"Spaces: "<<spaces<<endl;
        // cout<<"X: "<<win<<endl;
        // cout<<"O: "<<win2<<endl;
        cout << flag;
        cout << endl;
    }

    return 0;
}