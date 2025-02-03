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
bool compdouble(double a, double b)
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
    long n;
    cin >> n;
    vl a(n);
    for (long p = 0; p < n; p++)
    {
        cin >> a[p];
    }
    long cnt(0);
    for (long p = n - 2; p >= 0; p--)
    {
        if (a[p + 1] <= 0)
        {
            cnt = -1;
            break;
        }
        while (a[p] >= a[p + 1])
        {
            a[p] /= 2;
            ++cnt;
        }
    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}