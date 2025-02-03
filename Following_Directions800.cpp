#include <iostream>
#include <string>
using namespace std;
int main()
{

    int i, j, t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        long long int u = 0, r = 0, f = 0;
        for (i = 0; s[i] != 0; i++)
        {
            if (s[i] == 'U')
            {
                u += 1;
            }
            else if (s[i] == 'D')
            {
                u -= 1;
            }
            else if (s[i] == 'R')
            {
                r += 1;
            }
            else
            {
                r -= 1;
            }
            if (u == 1 && r == 1)
            {
                f = 1;
            }
        }
        if (f == 1)
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