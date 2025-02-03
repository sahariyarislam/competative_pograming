#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int i, j, k, t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n);
        vector<int>::iterator it;

        for (j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        sort(arr.begin(), arr.end(), greater<int>());

        int count = 0;
        for (j = 0; j < n - 2; j++)
        {
            if ((arr[j] == arr[j + 1]) && (arr[j] == arr[j + 2]))
            {
                count = 1;
                cout << arr[j] << endl;
                break;
            }
        }
        if (count == 0)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
