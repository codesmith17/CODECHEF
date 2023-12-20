#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (long long int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        long long int maxe = -1e18;
        long long int mine = +1e18;
        maxe = max(arr[0] * arr[0], arr[n - 1] * arr[n - 1]);
        if (arr[0] < 0 && arr[n - 1] > 0)
            mine = arr[0] * arr[n - 1];
        else
            for (long long int i = 0; i < n; i++)
                mine = min(mine, arr[i] * arr[i]);

        cout << mine << " " << maxe << endl;
    }

    return 0;
}