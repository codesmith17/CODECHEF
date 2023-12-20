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
        if ((x + y) % 2 == 0)
        {
            cout << abs((x - y) / 2) << endl;
        }
        if ((x + y) % 2 != 0)
        {
            cout << ceil(abs(((x - y) / 2.0))) << endl;
        }
    }

    return 0;
}