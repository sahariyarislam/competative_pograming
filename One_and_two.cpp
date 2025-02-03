#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<ll>
int main()
{
    ll n, t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vi arr(n);
        int cnt = 0, one = 0, two = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                two++;
            }
            else
            {
                one++;
            }
        }

        if (one == n)
        {

            cout << 1 << endl;
        }
        else if (two == n && two % 2 == 0)
        {

            cout << (n / 2) << endl;
        }
        else
        {
            if (two % 2 == 0)
            {
                ll k = 0;
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] == 2)
                    {
                        k++;
                    }
                    if (k == (two / 2))
                    {
                        cout << i + 1 << endl;
                        break;
                    }
                }
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}