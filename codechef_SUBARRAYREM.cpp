#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0, x, a = 0, b = 0, c;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            if (x == 0)
                a = a + 1;
            else
                a = a + 0;
            if (x == 1)
                b = b + 1;
            else
                b = b + 0;
            c = min(a, b);
            a = a - c;
            b = b - c;
            s = s + c;
        }
        cout << s + b / 3 << endl;
    }
    return 0;
}