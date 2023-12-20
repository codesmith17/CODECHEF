#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> f(n);
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }
        int x;
        cin >> x;
        set<int> d;
        for (int i = 0; i < x; i++)
        {
            int m;
            cin >> m;
            d.insert(m);
        }
        for (int i = 0; i < n; i++)
        {
            if (d.count(f[i]))
            {
                continue;
            }
            else
            {
                cout << f[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
