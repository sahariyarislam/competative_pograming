#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        vector<int> vi;
        ll n;
        cin >> n;
        if (n <= 9)
        {
            cout << n;
        }
        else
        {
            ll sum = 0;
            for (int i = 9; i > 0; i--)
            {
                if ((sum + i) <= n)
                {
                    sum += i;
                    vi.push_back(i);
                }
            }
        }
        reverse(vi.begin(), vi.end());
        for (int i = 0; i < vi.size(); i++)
        {
            cout << vi[i];
        }
        cout << endl;
    }
    return 0;
}