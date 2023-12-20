#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;

        cin >> n;
        cin >> k;
        long long int oks = (n * (n + 1)) / 2;
        if (k - oks < 0)
        {
            cout << "-1" << endl;
            continue;
        }
        cout << k - oks + 1 << " ";
        n--;
        while (n--)
        {
            cout << "1"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}