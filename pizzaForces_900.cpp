#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

// Graph Grid //
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n <= 10)
        {
            if (n <= 6)
                cout << 15 << endl;
            else if (n <= 8)
                cout << 20 << endl;
            else
                cout << 25 << endl;
        }

        else
        {
            ll ans = (n / 10) * 25;
            ll m = n % 10;

            if (m)
            {
                if (m == 1 || m == 2)
                    ans += 5;
                else if (m < 5)
                    ans += 10;
                else if (m <= 6)
                    ans += 15;
                else if (m <= 8)
                    ans += 20;
                else
                    ans += 25;
            }
            cout << ans << endl;
        }
    }
}