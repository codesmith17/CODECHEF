#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int N = 1e18;
    cin >> t;
    while (t--)
    {
        long long int x, y;

        cin >> x >> y;
        if (x == y)
        {
            cout << 100 * x << endl;
        }
        else if (min(x, y) == 1)
        {
            cout << max(x, y) - 1 << endl;
        }
        else
        {
            cout << x * y - x - y << endl;
        }
    }

    return 0;
}