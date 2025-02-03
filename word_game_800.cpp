#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define vi vector<int>
int main()
{
    ll t;
    cin >> t;
    // vi arr(3,0);
    while (t--)
    {
        int n;
        vi arr(3, 0);
        cin >> n;
        cin.ignore();
        string s1, s2, s3;
        getline(cin, s1);
        getline(cin, s2);
        getline(cin, s3);
        int cnt = 1;
        for (int i = 0; i < s1.size(); i += 4)
        {
            cnt = 1;
            for (int j = 0; j < s2.size(); j += 4)
            {
                if (s1[i] == s2[j] && s1[i + 1] == s2[j + 1] && s1[i + 2] == s2[j + 2])
                {
                    cnt++;
                    break;
                }
            }
            for (int j = 0; j < s3.size(); j += 4)
            {
                if (s1[i] == s3[j] && s1[i + 1] == s3[j + 1] && s1[i + 2] == s3[j + 2])
                {
                    cnt++;
                    break;
                }
            }
            if (cnt == 1)
            {
                arr[0] += 3;
            }
            else if (cnt == 2)
            {
                arr[0] += 1;
            }

            cnt = 1;
        }

        for (int i = 0; i < s2.size(); i += 4)
        {
            // int cnt=1;
            for (int j = 0; j < s1.size(); j += 4)
            {
                if (s2[i] == s1[j] && s2[i + 1] == s1[j + 1] && s2[i + 2] == s1[j + 2])
                {
                    cnt++;
                    break;
                }
            }
            for (int j = 0; j < s3.size(); j += 4)
            {
                if (s2[i] == s3[j] && s2[i + 1] == s3[j + 1] && s2[i + 2] == s3[j + 2])
                {
                    cnt++;
                    break;
                }
            }
            if (cnt == 1)
            {
                arr[1] += 3;
            }
            else if (cnt == 2)
            {
                arr[1] += 1;
            }

            cnt = 1;
        }

        for (int i = 0; i < s3.size(); i += 4)
        {
            // int cnt=1;
            for (int j = 0; j < s1.size(); j += 4)
            {
                if (s3[i] == s1[j] && s3[i + 1] == s1[j + 1] && s3[i + 2] == s1[j + 2])
                {
                    cnt++;
                    break;
                }
            }
            for (int j = 0; j < s2.size(); j += 4)
            {
                if (s3[i] == s2[j] && s3[i + 1] == s2[j + 1] && s3[i + 2] == s2[j + 2])
                {
                    cnt++;
                    break;
                }
            }
            if (cnt == 1)
            {
                arr[2] += 3;
            }
            else if (cnt == 2)
            {
                arr[2] += 1;
            }
            cnt = 1;
        }

        cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    }

    return 0;
}