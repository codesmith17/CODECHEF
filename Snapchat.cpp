#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];
        int count = 0;
        int arr3[n];

        for (int i = 0; i < n; i++)
        {
            if (arr1[i] > 0 && arr2[i] > 0)
            {
                if (i == 0)
                    arr3[i] = 1;
                else
                    arr3[i] = arr3[i - 1] + 1;
            }
            else
            {
                arr3[i] = 0;
            }
        }
        int max1 = 0;
        for (int i = 0; i < n; i++)
            max1 = max(max1, arr3[i]);

        cout << max1 << endl;
    }

    return 0;
}