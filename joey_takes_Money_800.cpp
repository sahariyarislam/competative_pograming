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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll x = 1, y;
        for (int i = 0; i < n; i++)
        {
            x *= arr[i];
        }
        x = (x + (n - 1));
        ll sum = (x * 2022);
        cout << sum << endl;
    }
    return 0;
}