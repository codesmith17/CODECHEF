#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int count = 0;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
                count++;
        }
        if (count % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}