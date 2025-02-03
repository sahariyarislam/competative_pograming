#include <bits/stdc++.h>
#define vi vector<int>
#define ll int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll m, s, rs = 0, max1 = 0;
        cin >> m >> s;
        vi arr(m, 0);
        int f = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
            max1 = max(arr[i], max1);
        }

        for (int i = 1; i <= 1001; i++)
        {

            if (find(arr.begin(), arr.end(), i) == arr.end())
            {
                if (s < i)
                {
                    max1++;
                    break;
                }
                rs += i;
                arr.push_back(i);
                max1 = max(max1, i);
            }

            if (rs == s)
            {

                break;
            }
        }

        sort(arr.begin(), arr.end());

        if (max1 == arr.size())
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}