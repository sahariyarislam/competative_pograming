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

        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                cout << n << " ";
            }
            else if (i == n)
            {
                cout << (n - 1) << " ";
            }
            else
            {
                cout << (i - 1) << " ";
            }
        }
        cout << endl;
    }

    return 0;
}