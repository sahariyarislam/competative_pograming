#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<ll>
int main()
{
    ll n, m, t;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        vi arr(m * 2);
        for (int i = 0; i < m * 2; i++)
            cin >> arr[i];
        if (m < n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}