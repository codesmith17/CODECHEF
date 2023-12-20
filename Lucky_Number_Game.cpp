#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (1)
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % a == 0 && arr[i] != 0)
                {
                    arr[i] = 0;
                    break;
                }
                if (arr[i] % a != 0 || arr[i] == 0)
                {
                    count++;
                }
            }
            if (count == n)
            {
                cout << "ALICE" << endl;
                break;
            }
            count = 0;
            // for (int i = 0; i < n; i++)
            // {
            //     cout << arr[i] << endl;
            // }
            // break;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % b == 0 && arr[i] != 0)
                {
                    arr[i] = 0;
                    break;
                }
                if (arr[i] % b != 0 || arr[i] == 0)
                {
                    count++;
                }
            }
            if (count == n)
            {
                cout << "BOB" << endl;
                break;
            }
        }
    }

    return 0;
}