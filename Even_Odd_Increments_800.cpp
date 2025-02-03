#include <bits/stdc++.h>
#define vi vector<long long>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vi arr(n, 0);
        ll evenn = 0, oddn = 0, evensum = 0, oddsum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                evenn++;
                evensum += arr[i];
            }
            else
            {
                oddn++;
                oddsum += arr[i];
            }
        }
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            if (x == 0)
            {
                if (y % 2 == 0)
                {
                    evensum += (evenn * y);
                }
                else
                {
                    oddn += evenn;
                    evensum += (evenn * y);
                    evenn -= evenn;
                }
            }
            else
            {
                if (y % 2 != 0)
                {
                    oddsum += (oddn * y);
                    evenn += oddn;
                    oddn -= oddn;
                }
                else
                {
                    oddsum += (oddn * y);
                }
            }
            cout << (oddsum + evensum) << endl;
        }
    }
    return 0;
}