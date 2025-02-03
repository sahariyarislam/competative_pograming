#include <iostream>
#define ll long long

using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll n = s.length();
    for (ll i = 1; i < n - 1; i++)
    {
        if (s[i] == 'a')
        {
            for (ll j = 0; j < i; j++)
                cout << s[j];
            cout << " a ";
            for (ll j = i + 1; j < n; j++)
                cout << s[j];
            cout << "\n";
            return;
        }
    }
    cout << s[0] << " ";
    for (ll i = 1; i < n - 1; i++)
        cout << s[i];
    cout << " ";
    cout << s[n - 1] << "\n";
}
int main()
{

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}