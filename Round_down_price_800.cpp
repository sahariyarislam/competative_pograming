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
        ll x = 1;
        while (x * 10 <= n)
        {
            x *= 10;
        }
        cout << n - x << endl;
    }
    return 0;
}