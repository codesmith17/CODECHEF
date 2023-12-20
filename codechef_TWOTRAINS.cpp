#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        int n;
        int k, m, x;
        cin >> n;

        k = 0;
        m = 0;
        for (int i = 1; i < n; ++i)
        {
            cin >> x;
            k = k + x;
            m = max(m, x);
        }
        cout << k + m << endl;
    }
    return 0;
}