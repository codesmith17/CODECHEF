#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int oks = 0;
        for (int i = 0; i < n; i++)
            oks += arr[i] % 2;

        if (x % 2 == 0 && oks == 0)
            cout << -1 << endl;
        else if (oks == n)
            cout << 0 << endl;
        else
        {
            if (x % 2 == 0)
                cout << n - oks << endl;
            else
            {
                int ans = (n - oks + 1) / 2;
                cout << ans << endl;
            }
        }
    }

    return 0;
}