#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 2 << endl;
        }
        else if (n == 2 or n == 3)
        {
            cout << 1 << endl;
        }
        else
        {
            if (n % 3 == 0)
            {
                cout << (n / 3) << endl;
            }
            else if (n % 3 == 1)
            {
                cout << (2 + ((n - 4) / 3)) << endl;
            }
            else if (n % 3 == 2)
            {
                cout << (1 + ((n - 2) / 3)) << endl;
            }
        }
    }

    return 0;
}