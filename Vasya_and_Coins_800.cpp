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
        ll a, b;

        cin >> a >> b;
        ll sum = (a + (b * 2));
        if (a == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << sum + 1 << endl;
        }
    }

    return 0;
}
