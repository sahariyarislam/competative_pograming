#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long
using namespace std;
int main()
{

    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int one = 0, mone = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
        {
            if (one > 0)
            {
                one--;
            }
            else
            {
                mone++;
            }
        }
        if (arr[i] > 0)
        {
            one += arr[i];
        }
    }
    cout << mone << endl;
    return 0;
}