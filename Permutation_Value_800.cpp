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
        for (i = 2; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << "1";
        cout << endl;
    }
    return 0;
}