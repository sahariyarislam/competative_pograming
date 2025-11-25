#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x = 0, res = 0;
        for (ll i = 1; i < n; i++)
        {
            cin >> x;
            // res += x ? x : (res > 0);
            if (x)
            {
                res = res + x;
            }
            else
            {
                if (res > 0)
                {
                    res = res + 1;
                }
                else
                {
                    res = res + 0;
                }
            }
        }

        cin >> x;

        cout << res << endl;
    }
}