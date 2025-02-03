#include <iostream>
// #include<string>
#include <cstring>
using namespace std;
int main()
{

    int t, i, j, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        int min = 0;
        for (i = 0; i < s.size(); i++)
        {
            int count = (s[i] - 96);
            if (min < count)
            {
                min = count;
            }
        }
        cout << min << endl;
    }
}