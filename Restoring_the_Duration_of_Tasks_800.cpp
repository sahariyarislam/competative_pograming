#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> s(n);
        vector<int> f(n);
        vector<int> ans(n);
        int head = 0;
        for (int i = 0; i < n; i++)
            cin >> s[i];
        for (int i = 0; i < n; i++)
            cin >> f[i];
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= head)
            {
                ans[i] = f[i] - s[i];
            }
            else
            {
                ans[i] = f[i] - head;
            }
            head = f[i];
        }
        for (auto x : ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}