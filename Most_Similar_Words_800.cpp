#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int compare(string s, string k)
{
    int x, y, ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != k[i])
        {
            x = s[i] - 96;
            y = k[i] - 96;
            ans = ans + abs(x - y);
        }
    }
    return ans;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int m, n, minv = INT_MAX;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = i + 1; j <= n - 1; j++)
            {
                int res = compare(s[i], s[j]);
                minv = min(minv, res);
            }
        }
        cout << minv << endl;
    }
    return 0;
}