#include <bits/stdc++.h>
#define ll long long
#define vint vector<int>
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vint vi;
        int oddmin = (1000000000 - 1), evenmin = (1000000000), evenposible = 0, oddposible = 0;

        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            vi.push_back(b);
            if (b % 2 != 0)
            {
                oddmin = min(b, oddmin);
            }
            else
            {
                evenmin = min(evenmin, b);
            }
        }
        // for all even cases
        for (int i = 0; i < n; i++)
        {
            if (vi[i] % 2 == 0)
            {
                evenposible++;
            }
            else
            {
                if (vi[i] > oddmin)
                {
                    evenposible++;
                }
            }
        }
        // for all odd cases
        for (int i = 0; i < n; i++)
        {
            if (vi[i] % 2 != 0)
            {
                oddposible++;
            }
            else
            {
                if (vi[i] > oddmin)
                {
                    oddposible++;
                }
            }
        }
        if (oddposible == n or evenposible == n)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}