#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<ll>
int main()
{
    ll n, t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vi arr(n);
        int cnt = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if ((arr[i] % 2 == arr[i + 1] % 2))
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}