#include <bits/stdc++.h>
#define ll long long
#define vi vector<ll>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if ((sum % 2 == 0))
        {
            cout << 0 << endl;
            continue;
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 1)
            {
                int x = arr[i];
                int cnt = 0;
                while ((x % 2 == 1))
                {
                    x /= 2;
                    cnt++;
                }
                ans = min(ans, cnt);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                int x = arr[i];
                int cnt = 0;
                while ((x > 0) && (x % 2 == 0))
                {
                    x /= 2;
                    cnt++;
                }
                ans = min(ans, cnt);
            }
        }
        cout << ans << endl;
    }
    return 0;
}