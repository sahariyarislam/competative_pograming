#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<ll>
int main()
{
    ll n, m, t;
    cin >> t;
    string p1 = "Burenka", p2 = "Tonya";
    while (t--)
    {
        cin >> n >> m;
        if (n % 2 == 0 && m % 2 != 0)
            cout << p1 << endl;
        if (n % 2 != 0 && m % 2 == 0)
            cout << p1 << endl;
        if (n % 2 == 0 && m % 2 == 0)
            cout << p2 << endl;
        if (n % 2 != 0 && m % 2 != 0)
            cout << p2 << endl;
    }

    return 0;
}