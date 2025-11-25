#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ans;
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                ans.clear();
                break;
            }
            if (((n + 1) / 2) % 2 == 1)
            {
                ans.push_back(1);
                n = (n + 1) / 2;
            }
            else
            {
                ans.push_back(2);
                n = (n - 1) / 2;
            }
        }
        if (ans.empty() or ans.size() > 40)
        {
            cout << -1 << endl;
        }
        else
        {
            reverse(ans.begin(), ans.end());
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}