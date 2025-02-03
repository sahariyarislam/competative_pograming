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
        string s;
        cin >> s;
        char ch = s[0];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == ch)
                cnt++; //-1
        }
        if (cnt == n)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {

                if (s[i] == 'L' && s[i + 1] == 'R')
                {
                    cout << i + 1 << endl;
                    break;
                }
                else if (s[i] == 'R' && s[i + 1] == 'L')
                {
                    cout << 0 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}