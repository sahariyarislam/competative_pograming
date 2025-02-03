#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<ll>
int main()
{
    ll n, t;
    cin >> t;
    string s;

    while (t--)
    {
        cin >> n;
        vi arr(n);
        int cnt = 0, f = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cin >> s;
        for (int i = 0; i < n; i++)
        {
            char k = s[i];
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    if (k != s[j])
                    {
                        f = 1;
                        cout << "NO\n";
                        break;
                    }
                }
            }
            if (f == 1)
                break;
        }
        if (f != 1)
        {
            cout << "YES\n";
        }
    }

    return 0;
}