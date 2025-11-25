#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pair<int, int>> vii;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define all(x) (x).begin(), (x).end()

#define ff first
#define ss second
#define sz (int)(n).size()
#define forc(cn) for (auto &x : (cn))
#define findc(cn, abc) ((cn).find(abc) != (cn).end())

#define PI 2 * acos(0)
#define torad(x) (x) * ((2 * acos(0)) / 180.0)
#define todeg(x) ((x) * (180.0 / (2 * acos(0))))
#define eps 1e-15
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ceil(a, b) ((a + b - 1) / b)
#define nmod(a, b) ((a % b) + b) % b
void printvec(vi arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
bool comp(double a, double b)
{
    if (fabs(a - b) <= eps)
        return 0;
    else
    {
        return 1;
    }
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;
        int cnt = 1, maxn = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                if (i == n - 2)
                {
                    cnt++;
                }
                cnt++;
                if (i == n - 2)
                {
                    maxn = max(maxn, cnt);
                }
            }
            else
            {
                cnt++;

                maxn = max(maxn, cnt);
                cnt = 1;
            }
        }
        if (maxn == -1)
        {
            cout << n + 1 << endl;
        }
        else
        {
            cout << maxn << endl;
        }
    }
}
int main()
{
    solve();

    return 0;
}