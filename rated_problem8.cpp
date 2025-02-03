#include <iostream>
using namespace std;
int main()
{

    int i, j, k, t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];

        for (j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (j = 0; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (arr[j] < arr[k])
                {
                    int temp = arr[j];
                    arr[j] = arr[k];
                    arr[k] = temp;
                }
            }
        }

        int count = 0;
        for (j = 0; j < n; j++)
        {
            if ((arr[j] == arr[j + 1]) && (arr[j] == arr[j + 2]))
            {
                count = 1;
                cout << arr[j] << endl;
                break;
            }
        }
        if (count == 0)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}