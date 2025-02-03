#include <iostream>
#include <string>
using namespace std;
int main()
{

    int t, n, i, j;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> n;

        cin >> s;
        for (i = 0, j = n - 1; i <= j; i++, j--)
        {
            if (s[i] != s[j])
            {
                n -= 2;
            }
            else
            {
                break;
            }
        }
        cout << n << endl;
    }
    return 0;
}