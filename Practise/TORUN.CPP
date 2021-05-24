#include <iostream>

using namespace std;

int main()
{
    long int t;
    cin >> t;
    for (long int i = 0; i < t; i++) {
        long int n, p = 0, q;
        cin >> n;
        if (n == 1)
        {
            cout << "20\n" << "\n";
        }
        else if (n == 2)
        {
            cout << "36\n" << "\n";
        }
        else if (n == 3)
        {
            cout << "51\n" << "\n";
        }
        else if (n == 4) {
            cout << "60\n" << "\n";
        }

        else if (n > 4) {
            p = n / 4;
            q = n % 4;
            p = p * 44;
            if (q == 0)
            {
                cout << p + 16 << "\n";
            }
            else if (q == 1)
            {
                cout << p + 32 << "\n";
            }
            else if (q == 2)
            {
                cout << p + 44 << "\n";
            }
            else if (q == 3)
            {
                cout << p + 55 << "\n";
            }
        }
    }
    return 0;
}