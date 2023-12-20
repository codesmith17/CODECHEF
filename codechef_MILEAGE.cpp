#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float n, x, y, a, b;
        cin >> n >> x >> y >> a >> b;
        if ((n * x * 1.0) / (a * 1.0) > (n * y * 1.0) / (b * 1.0))
            cout << "DIESEL" << endl;
        if ((n * x * 1.0) / (a * 1.0) < (n * y * 1.0) / (b * 1.0))
            cout << "PETROL" << endl;
        if ((n * x * 1.0) / (a * 1.0) == (n * y * 1.0) / (b * 1.0))
            cout << "ANY" << endl;
    }

    return 0;
}