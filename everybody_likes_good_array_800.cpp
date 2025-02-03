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
        int cons = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            ++cons;
            if (i == n - 1 || (arr[i] % 2) != (arr[i + 1] % 2))
            {
                ans += (cons - 1);
                cons = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}