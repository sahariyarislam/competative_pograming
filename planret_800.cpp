#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, n, c, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        vector<int> arr((101), 0);
        vector<int>::iterator it;
        for (i = 0; i < (n); i++)
        {
            cin >> k;
            arr[k]++;
        }

        int count = 0;
        for (i = 0; i < 101; i++)
        {

            count += min(arr[i], c);
        }
        cout << count << endl;
    }

    return 0;
}