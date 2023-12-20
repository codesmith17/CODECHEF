#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        

        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            arr1[i] = arr[i];
        }


        int sum = 0;
        sort(arr1, arr1 + n);
       
        for (int i = 0 + k; i < n - k; i++)
        {
            sum += arr1[i];
        }
        float avg = sum * 1.0 / ((1.0) * (n - 2 * k));
        cout << avg << endl;
    }

    return 0;
}