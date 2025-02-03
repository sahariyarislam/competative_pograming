#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long pow1(long long x, long long y)
{
    long long ans = 1;
    for (int i = 1; i <= y; i++)
    {
        ans *= x;
    }
    return ans;
}
int main()
{
    ll n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        double x = log10(n);
        int k = log10(n);
        if ((x - (k) >= 0))
        {
            cout << (n - (pow1(10, floor(x)))) << endl;
        }
        else
        {
            cout << ((n)-pow1(10, (x - 1))) << endl;
        }
    }

    return 0;
}