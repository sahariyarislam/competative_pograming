#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long ll;
int main()
{
    ll n, t;
    cin >> t;

    while (t--)
    {
        int arr[4], tarr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
            tarr[i] = arr[i];
        }
        sort(tarr, tarr + 4);
        int a = tarr[0];
        int b = tarr[3];
        if ((arr[0] == a && arr[3] == b) || (arr[1] == a && arr[2] == b))
        {
            cout << "YES" << endl;
        }
        else if ((arr[3] == a && arr[0] == b) || (arr[2] == a && arr[1] == b))
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