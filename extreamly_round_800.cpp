#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long ll;
int main()
{
    ll n, t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int m = s[0] - '0';
        int A = (n - 1) * 9 + m;
        cout << A << endl;
    }
    return 0;
}