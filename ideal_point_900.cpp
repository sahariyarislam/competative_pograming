#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> gain(100, 0);
        for (int i = 1; i <= n; i++)
        {
            int l, r;
            cin >> l >> r;
            if (l <= k and r >= k)
            {
                gain[l]++;
                gain[r + 1]--;
            }
        }
        for (int i = 1; i <= 51; i++)
        {
            gain[i] += gain[i - 1];
        }

        if (gain[k] > gain[k - 1] and gain[k] > gain[k + 1])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}