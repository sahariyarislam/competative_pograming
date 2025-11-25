#include <bits/stdc++.h>
const int MOD = 1e9 + 7;

#define pf printf
#define sc scanf

#define s1(n) scanf("%d", &n)
#define s2(n1, n2) scanf("%d %d", &n1, &n2)
#define s3(n1, n2, n3) scanf("%d %d %d", &n1, &n2, &n3)
#define s4(n1, n2, n3, n4) scanf("%d %d %d %d", &n1, &n2, &n3, &n4)

#define ss1(n) scanf("%lld", &n)
#define ss2(n1, n2) scanf("%lld %lld", &n1, &n2)
#define ss3(n1, n2, n3) scanf("%lld %lld %lld", &n1, &n2, &n3)
#define ss4(n1, n2, n3, n4) scanf("%lld %lld %lld %lld", &n1, &n2, &n3, &n4)

#define p1(x) printf("%I64d", x)
#define p2(x, y) printf("%I64d %I64d", x, y)
#define p3(x, y, z) printf("%I64d %I64d %I64d", x, y, z)

#define fi(i, a, b) for (long long i = a; i <= b; i++)
#define fm(i, a) for (long long i = 1; i <= a; i++)
#define fd(i, a, b) for (long long i = b; i >= a; i--)

#define clr(x) memset(x, 0, sizeof(x))
#define cln(x) memset(x, -1, sizeof(x))

#define fw freopen("output.txt", "w", stdout);

typedef long long int ll;
/// ll ar[1009],arr[1009];
using namespace std;

/*ll LCM(ll a,ll b)
{
    return (a/(__gcd(a,b)))*b;
}*/

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll> v;
        ll n, i, sz, j, p1, p2, x, y;
        string s;
        cin >> n >> s;
        for (i = 0; i < n; i++)
        {
            if (s[i] != '?')
                v.push_back(i);
        }
        if (v.size() == 0)
        {
            for (i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    s[i] = 'B';
                else
                    s[i] = 'R';
            }
        }
        else
        {
            for (j = v[0]; j >= 0; j--)
            {
                if (s[j] == 'B' and s[j - 1] == '?')
                    s[j - 1] = 'R';
                else if (s[j] == 'R' and s[j - 1] == '?')
                    s[j - 1] = 'B';
            }
            for (j = v[v.size() - 1]; j < n; j++)
            {
                if (s[j] == 'B' and s[j + 1] == '?')
                    s[j + 1] = 'R';
                else if (s[j] == 'R' and s[j + 1] == '?')
                    s[j + 1] = 'B';
            }

            for (i = 0; i < v.size() - 1; i++)
            {
                p1 = v[i];
                p2 = v[i + 1];
                /// cout<<p1<<" "<<p2<<endl;
                if (p2 - p1 == 1)
                    continue;
                else
                {
                    if ((p2 - p1 - 1) % 2 == 0)
                    {
                        x = (p2 - p1 - 1) / 2;
                        y = x;
                    }
                    else
                    {
                        x = (p2 - p1 - 1) / 2 + 1;
                        y = (p2 - p1 - 1) / 2;
                    }
                    // cout<<x<<" "<< y<<endl;
                    while (x--)
                    {
                        if (s[p1] == 'B' and s[p1 + 1] == '?')
                            s[p1 + 1] = 'R';
                        else if (s[p1] == 'R' and s[p1 + 1] == '?')
                            s[p1 + 1] = 'B';
                        p1++;
                    }
                    while (y--)
                    {
                        if (s[p2] == 'B' and s[p2 - 1] == '?')
                            s[p2 - 1] = 'R';
                        else if (s[p2] == 'R' and s[p2 - 1] == '?')
                            s[p2 - 1] = 'B';
                        p2--;
                    }
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}