#include <bits/stdc++.h>
using namespace std;
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

// PRIME NUMBER TEST//
bool prime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Graph Grid //
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        string ans;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        for (int i = 1; i <= k; i++)
        {
            int f = 0, cnt = 1;
            char ch;
            int x = n / k;
            for (ch = 'a'; ch <= 'z'; ch++)
            {
                if (cnt > x)
                {
                    f = 1;
                    break;
                }
                if (mp[ch] == 0)
                {
                    ans += ch;
                    break;
                }
                mp[ch]--;
                cnt++;
            }
            if (f == 1)
                ans += ch;
        }
        cout << ans << endl;
    }
}