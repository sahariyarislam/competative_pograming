#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vi arr(n);

    for (int i = 0; i < (n); i++)
        cin >> arr[i];

    int k;
    cin >> k;

    while (k--)
    {

        int x, y;
        cin >> x >> y;
        x = (x - 1);
        if ((x - 1) >= 0)
        {
            arr[x - 1] += ((y - 1));
        }
        if ((x + 1) < (n))
        {
            arr[x + 1] += (arr[x] - y);
        }
        arr[x] = 0;
    }
    for (int i = 0; i < (n); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}