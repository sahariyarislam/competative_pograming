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
    vi arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cin >> t;
    while (t--)
    {
        int n;
        vi arr2;
        cin >> n;
        if (n <= 9)
        {
            cout << n << endl;
        }
        else
        {
            int res = 0;
            for (int i = arr.size() - 1; i >= 0; i--)
            {
                if ((n >= (res + arr[i])))
                {
                    res += arr[i];
                    arr2.push_back(arr[i]);
                }
            }

            if (res == n)
            {
                reverse(arr2.begin(), arr2.end());
                forc(arr2) cout << x;
            }
            else
            {
                cout << "-1" << endl;
            }
            cout << endl;
        }
    }
}

int main()
{
    solve();

    return 0;
}