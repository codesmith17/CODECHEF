#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, k;
    cin >> t;

    while (t--)
    {
        int steps = 0;
        cin >> a >> b >> k;
        if (b > a)
        {
            for (int j = 0;; j++)
            {

                a = a + k;
                steps++;

                if (a >= b)
                {
                    break;
                }
            }
        }
        else if (a > b)
        {
            for (int j = 0;; j++)
            {

                a = a - k;
                steps++;

                if (a <= b)
                {
                    break;
                }
            }
        }

        cout << steps << endl;
    }

    return 0;
}