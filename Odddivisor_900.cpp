#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n && !(n & (n - 1)))
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}