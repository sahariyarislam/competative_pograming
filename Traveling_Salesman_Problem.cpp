#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int xmax = 0, xneg = 0, ymax = 0, yneg = 0;
        int n;
        cin >> n;
        while (n--)
        {
            int x, y;
            cin >> x >> y;
            if (x >= 0)
            {
                xmax = max(x, xmax);
            }
            else
            {
                xneg = min(xneg, x);
            }
            if (y >= 0)
            {
                ymax = max(ymax, y);
            }
            else
            {
                yneg = min(yneg, y);
            }
        }
        xneg = abs(xneg);
        yneg = abs(yneg);

        int ans = ((xmax * 2) + (ymax * 2) + (xneg * 2) + (yneg * 2));
        cout << ans << endl;
    }
    return 0;
}