#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long>
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll r, c;
        cin >> r >> c;
        if (r == 1 && c == 1)
        {
            cout << 0 << endl;
        }
        else if (r < c)
        {
            cout << ((2 * r) - 2) + c << endl;
        }
        else if (c < r)
        {
            cout << ((2 * c) - 2) + r << endl;
        }
        else
        {
            cout << ((2 * r) + (c - 2)) << endl;
        }
    }

    return 0;
}