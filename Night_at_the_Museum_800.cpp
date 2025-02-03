#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long
using namespace std;
int distance(char a, char b)
{
    int k = abs(a - b);
    if (k > 13)
    {
        k = abs(26 - k);
    }
    return k;
}
int main()
{
    string s;
    cin >> s;
    int ans = 0;
    char a = 'a';
    for (int i = 0; i < s.size(); i++)
    {
        ans += distance(a, s[i]);
        a = s[i];
    }
    cout << ans << endl;

    return 0;
}