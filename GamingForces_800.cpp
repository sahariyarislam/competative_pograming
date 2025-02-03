#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, i, j, n, num;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int num1 = 0;
        for (i = 0; i < n; i++)
        {
            cin >> num;
            if (num == 1)
            {
                num1++;
            }
        }
        if (num1 % 2 == 0)
        {
            cout << (n - (num1 / 2)) << endl;
        }
        else
        {
            cout << (n - ((num1 + 1) / 2)) + 1 << endl;
        }
    }
    return 0;
}