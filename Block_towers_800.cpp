#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin() + 1, arr.end());
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[0])
            {
                arr[0] += ((arr[i] - arr[0] + 1) / 2);
            }
        }
        cout << arr[0] << endl;
    }
    return 0;
}