#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin >> x >> y;
        long long int n = 0;
        if (x == y)
        {

            cout << 0 << endl;
            continue;
        }
        if (x == 3 || x == 5 || x == 7)
        {
            n++;
            x += x;
        }
        if (x == 9)
        {
            n++;
            x += 3;
        }

        cout << n + (y - x + 1) / 2 << endl;
    }

    return 0;
}