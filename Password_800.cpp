#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long fact(long long n)
{
    ll ans = 1;
    for (int i = n; i >= 1; i--)
    {
        ans *= i;
    }
    return ans;
}
int main()
{

    int t, n;
    cin >> t;
    while (t--)
    {
        ll temp = 0, temp2 = 0;
        int k = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        k = (10 - n);
        temp = (fact(4) / (fact(2) * fact(4 - 2)));
        temp2 = (fact(k) / (fact(2) * fact(k - 2)));
        ll res = (temp * temp2);
        cout << res << endl;
    }
    return 0;
}