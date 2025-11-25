#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int div = n / m, res, cnt = n;
    while (div != 0)
    {
        div = n / m;
        res = n % m;
        cnt += div;
        n = div + res;
    }
    cout << cnt;
}