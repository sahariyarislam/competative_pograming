#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll ans1 = abs(a - 1);
        ll ans2 = abs(b - c) + (c - 1);
        if (ans1 == ans2)
        {
            cout << 3 << endl;
        }
        else if (ans1 < ans2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}