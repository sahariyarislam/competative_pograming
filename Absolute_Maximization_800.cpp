#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve()
{
    int n;
    cin >> n;
    int x = INT_MAX;
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x &= a;
        y |= a;
    }
    cout << y - x << endl;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}