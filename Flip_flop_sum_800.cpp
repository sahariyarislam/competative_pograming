#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
int main()
{
    ll n, t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vi arr(n);
        int f = 0, neg1 = 0;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans += arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i + 1 < n && arr[i] == -1 && arr[i + 1] == -1)
            {
                f = 1;
            }
            if (arr[i] == -1)
            {
                neg1++;
            }
        }
        if (f == 1)
        {
            ans -= (-2);
            ans += 2;
        }
        else if (neg1 == 0)
        {
            ans -= 4;
        }
        cout << ans << endl;
    }

    return 0;
}