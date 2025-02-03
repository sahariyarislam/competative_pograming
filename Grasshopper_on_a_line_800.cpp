#include <iostream>
using namespace std;
int main()
{
    int i, j, t, n;
    cin >> t;
    int arr[100];
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        if (x < k || x % k != 0)
        {
            cout << "1" << endl
                 << x << endl;
            continue;
        }
        cout << "2" << endl;
        cout << "1" << " " << (x - 1) << endl;
    }
    return 0;
}