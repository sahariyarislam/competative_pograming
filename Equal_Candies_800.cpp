#include <iostream>
using namespace std;
int main()
{

    int t, i, j, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        long long sum = 0;
        for (i = 1; i < n; i++)
        {
            sum += (arr[i] - arr[0]);
        }
        cout << sum << endl;
    }
    return 0;
}