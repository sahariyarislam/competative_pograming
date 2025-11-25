#include <bits/stdc++.h>
using namespace std;
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ff first
#define ss second
#define pb push_back
#define pr pair<int, int>
#define im -1e18
#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define all(a) a.begin(), a.end()
#define setbit(n) __builtin_popcount(n);
#define totalbit(n) log2(n) + 1
#define oh cout << "Alpha valo sele" << endl;

#define for0(a, n) for (int i = a; i < n; i++)
#define for1(a, n) for (int i = a; i <= n; i++)
#define rfor0(n, a) for (int i = n - 1; i >= a; i--)
#define rfor1(n, a) for (int i = n; i > a; i--)

#define nl endl
#define len(v) v.size()
#define lena(a) sizeof(a) / sizeof(a[0])
#define no cout << "NO" << nl;
#define yes cout << "YES" << nl;
#define posation(x) cout << fixed << setprecision(x)
#define pi 3.141592653589793
#define INF 100000000000
#define mod 1000000007 // 10^9+7;
#define num 1000005

typedef long long int ll;
typedef unsigned long long int llu;

int main()
{
    int ar[12] = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41};
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n & 1)
        {
            n--;
            int a, b, c;
            c = 1;
            int x, y;
            for (int i = 0; i < 12; i++)
            {
                x = ar[i];
                y = n - x;
                if (__gcd(x, y) == c)
                {
                    a = x;
                    b = y;
                    break;
                }
            }
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            cout << 2 << ' ' << n - 3 << ' ' << 1 << nl;
        }
    }
}