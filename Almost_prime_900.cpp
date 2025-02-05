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
bool isprime(ll n)
{
    if (n == 2)
        return true;
    if (n % 2 == 0 || n < 2)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<bool> v(n + 1, 0);
    v[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        if (isprime(i))
        {
            v[i] = 1;
        }
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 6; i <= n; i++)
    {
        cnt1 = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0 && v[j])
            {
                cnt1++;
            }
            if (cnt1 > 2)
                break;
        }
        if (cnt1 == 2)
            cnt2++;
    }
    cout << cnt2 << endl;
}

int main()
{
    solve();
    return 0;
}