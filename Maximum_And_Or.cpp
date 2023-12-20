#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int x = a ^ b;
        int count = 1;
        while (x > 0 && c > 0)
        {
            if (x % 2 != 0)
                count *= 2;
            x /= 2;
            c--;
        }

        cout << count << endl;
    }
    return 0;
}