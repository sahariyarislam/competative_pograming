#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll n, m;
        cin >> n >> m;
        ll rp = 0, price = 0;
        if (n <= m)
        {
            cout << n * min(a, b) << endl;
            continue;
        }

        if ((m * a) <= (m + 1) * b)
        {
            ll temp1 = n / (m + 1);
            ll temp2 = n % (m + 1);
            ll temp3 = temp1 * m * a;
            temp3 += temp2 * min(a, b);
            cout << temp3 << endl;
        }
        else
        {
            cout << n * b << endl;
        }

        // cout << price << endl;
    }
    return 0;
}