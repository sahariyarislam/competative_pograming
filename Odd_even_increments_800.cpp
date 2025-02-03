#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<ll> vi(n);
        int cnt = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vi[i];
        }
        bool can = true;

        for (int i = 0; i < (n); i++)
        {
            if (vi[0] % 2 != vi[i] % 2 && i % 2 == 0)
            {
                can = false;
                break;
            }
            if (vi[1] % 2 != vi[i] % 2 && i % 2 == 1)
            {
                can = false;
                break;
            }
        }

        if (can)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
