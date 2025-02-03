#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int t, i, j, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n + 1);
        for (i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (i = 1; i <= n; i++)
        {
            cout << (n - arr[i] + 1) << " ";
        }
        cout << endl;
    }
    return 0;
}