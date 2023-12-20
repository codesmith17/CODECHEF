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
        if (a < b)
            cout << "REPAIR" << endl;
        if (a > b)
            cout << "NEW PHONE" << endl;
        if (a == b)
            cout << "ANY" << endl;
    }

    return 0;
}