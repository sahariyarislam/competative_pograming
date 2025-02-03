#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll z1, z2, x1, y1, x2, y2, x3, y3;

        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        if ((x1 == x2 || x1 == x3 || x2 == x3) && (y1 == y2 || y1 == y3 || y2 == y3))
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}