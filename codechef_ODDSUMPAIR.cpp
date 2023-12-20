#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b) % 2 != 0)
        {
            cout << "YES" << endl;
            continue;
        }
        if ((a + c) % 2 != 0)
        {
            cout << "YES" << endl;
            continue;
        }
        if ((c + b) % 2 != 0)
        {
            cout << "YES" << endl;
            continue;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}