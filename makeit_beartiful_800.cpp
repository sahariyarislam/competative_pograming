#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long>
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int cnt = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                cnt++;
            }
        }
        if (cnt == n)
        {
            cout << "NO\n";
        }
        else
        {
            int j, i;
            for (i = 1, j = n - 1; i<n, j> i; i += 2, j--)
            {
                swap(arr[i], arr[j]);
            }
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {

                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}