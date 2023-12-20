#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 3;
        int arr[3];
        int max1 = 0, maxat;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            max1 = max(max1, arr[i]);
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != max1)
                sum = sum + arr[i];
        }
      
        if (sum == max1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}