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
void printvec(vl arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    int n, m;
    cin >> n >> m;
    vl arr(n), sol1(n), sol2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            sol1[i] = arr[i];
        }
        else
        {

            if (arr[i] < arr[i - 1])
            {
                sol1[i] = arr[i - 1] - arr[i];
            }
            else
            {
                sol1[i] = 0;
            }
        }
    }
    sol2[n - 1] = 0;

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            sol2[i] = arr[i + 1] - arr[i];
        }
        else
        {
            sol2[i] = 0;
        }
    }
    for (int i = 2; i < n; i++)
    {
        sol1[i] += sol1[i - 1];
    }
    for (int i = n - 3; i >= 0; i--)
    {
        sol2[i] += sol2[i + 1];
    }
    sol1[0] = 0;

    while (m--)
    {
        int p, q;
        cin >> p >> q;
        p = p - 1;
        q = q - 1;
        if (p < q)
        {
            cout << sol1[q] - sol1[p] << endl;
        }
        else
        {
            cout << abs(sol2[q] - sol2[p]) << endl;
        }
    }
}

int main()
{
    solve();

    return 0;
}