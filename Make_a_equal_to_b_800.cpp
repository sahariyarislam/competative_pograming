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
        ll n, cnt = 0, for1 = 0, for0 = 0, for11 = 0, for02 = 0;
        cin >> n;
        vi arr(n), arr2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                for1++;
            }
            else
            {
                for0++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
            if (arr2[i] == 1)
            {
                for11++;
            }
            else
            {
                for02++;
            }
        }
        ll ans1 = 0, ans2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr2[i])
                ans1++;
        }
        ans2 = abs(for1 - for11) + abs(for0 - for02);
        ans2 /= 2;
        ans2++;
        cout << min(ans1, ans2) << endl;
    }
    return 0;
}