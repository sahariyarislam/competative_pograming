#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long
using namespace std;
int main()
{

    vi arr;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            arr.push_back(s[i] - 48);
        }
    }
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if (i < (n - 1))
            cout << "+";
    }
    return 0;
}