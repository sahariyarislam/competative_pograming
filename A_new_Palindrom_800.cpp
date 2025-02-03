#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t, i, j;
    string s, k;
    cin >> t;
    while (t--)
    {
        int num = 0;
        cin >> s;
        int x;
        x = s.size();
        if (x % 2 == 0 && x > 2)
        {
            for (int i = 1; i < x / 2; i++)
            {
                if (s[i] != s[i - 1])
                {
                    num++;
                    break;
                }
            }
        }
        else if (x % 2 != 0 && x > 3)
        {
            for (i = 1; i < x / 2; i++)
            {
                if (s[i] != s[i - 1])
                {
                    num++;
                    break;
                }
            }
        }
        if (num > 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}