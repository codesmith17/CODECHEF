#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            cout << "-100"
                 << " " << y << " " << 3 * x - y + 100 << endl;
        }
        if (x < y)
        {
            cout << "100"
                 << " " << y << " " << 3 * x - y - 100 << endl;
        }
        if (x == y)
        {
            cout << y << " " << y << " " << y << endl;
        }
    }

    return 0;
}