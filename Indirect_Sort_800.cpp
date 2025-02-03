#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define vi vector<ll>
typedef long long ll;
int main()
{

    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (arr[0] == 1)
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