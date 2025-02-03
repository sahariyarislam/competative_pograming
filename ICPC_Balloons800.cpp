#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int i, j, t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        vector<int> arr(27, 0);
        for (i = 0; i < s.size(); i++)
        {
            arr[(s[i] - 64)]++;
        }
        int sum = 0;
        for (i = 1; i < 27; i++)
        {
            if (arr[i] == 1)
            {
                sum += 2;
            }
            else
            {
                sum += arr[i];
                if (arr[i] > 1)
                {
                    sum += 1;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}