#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define sz(n) ((int)n.size())
#define ll long long
#define vi vector<int>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = (a + 1) / 2;
        int y = ((b + 1) / 2);
        int x1 = a - x;
        int y1 = b - y;
        if ((x <= 2 && y <= 2) && (y <= 2 && x1 <= 2) && (x1 <= 2 && y1 <= 2) && (y1 <= 2 && y <= 2))
            cout << x << " " << y << endl;
        else
            cout << 1 << " " << 1 << endl;
    }
    return 0;
}