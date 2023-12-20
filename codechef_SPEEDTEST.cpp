#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, x, b, y;
        cin >> a >> x >> b >> y;
        float al = a / x, bo = b / y;
        if (al > bo)
            cout << "Alice" << endl;
        if (bo > al)
            cout << "Bob" << endl;
        if (bo == al)
            cout << "Equal" << endl;
    }

    return 0;
}