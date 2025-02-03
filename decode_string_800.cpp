#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
char strtoal(char x)
{
    int num = (x - 49);
    x = char(num + 97);
    return x;
}
char twodigit(char x, char y)
{
    int n = y - 48;

    int k = x - 48;

    n = (n * 10) + k;
    x = char(n + 96);
    return x;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s, k;
        cin >> s;

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != '0')
            {
                char ch = strtoal(s[i]);
                k.push_back(ch);
            }
            else
            {
                char chh = twodigit(s[i - 1], s[i - 2]);
                k.push_back(chh);
                i = i - 2;
            }
        }
        for (int i = k.size() - 1; i >= 0; i--)
            cout << k[i];
        cout << endl;
    }
    return 0;
}