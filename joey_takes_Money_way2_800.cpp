#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll arr[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        ll x, y;
        int i = 1, j = 2;
        for (int k = 1; k < n; k++)
        {

            x = (arr[i] * arr[j]);
            y = 1;
            arr[i] = x;
            arr[j] = y;
            j++;
        }
        ll sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += arr[i];
        }

        ll res = (sum * 2022);
        cout << res << endl;
    }
    return 0;
}