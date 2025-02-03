#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long
using namespace std;
int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        int k;
        int l = 0, b = 1;
        cin >> k;
        vi arr, arr2;
        vector<int>::iterator it;
        for (int i = 2; i <= 100; i++)
        {
            int r = i % b;
            it = find(arr.begin(), arr.end(), r);
            if (it == arr.end())
            {
                arr.push_back(r);
                arr2.push_back(i);
                l++;
                b++;
            }

            if (l == k)
            {
                break;
            }
        }
        for (int i = 0; i < k; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}