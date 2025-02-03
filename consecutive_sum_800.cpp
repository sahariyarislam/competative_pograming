#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll sum = 0;
        vi arr(n);
        vi arr2(k, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr2[i % k] = max(arr2[i % k], arr[i]);
        }
        for (int i = 0; i < k; i++)
            sum += arr2[i];
        cout << sum << endl;
    }
    return 0;
}
