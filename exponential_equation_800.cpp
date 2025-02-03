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
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << (n / 2) << " " << 1 << endl;
        }
    }

    return 0;
}