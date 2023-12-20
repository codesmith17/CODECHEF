#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "YES" << endl;
            continue;
        }
        if (a > b)
        {
            while (a > b)
            {
                b = b * 2;
            }
            if (a == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }
        if (b > a)
        {
            while (a < b)
            {
                a = a * 2;
            }
            if (a == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }
    }

    return 0;
}