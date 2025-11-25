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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n + 3];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        sort(ar, ar + n);
        ll cnt = 0;
        ll ans = 0;
        ll mx = 0;
        for (int i = 0; i < n; i++)
        {
            while (ar[i] % 2 == 0)
            {
                cnt++;
                ar[i] /= 2;
            }
            ans += ar[i];
            mx = max(mx, ar[i]);
        }
        ll y = mx;
        
        for (int i = 1; i <= cnt; i++)
        {
            y *= 2;
        }
        ans += y;
        ans -= mx;
        cout << ans << endl;
    }
}

int main()
{
    solve();

    return 0;
}