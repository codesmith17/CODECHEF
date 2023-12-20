#include <bits/stdc++.h>
using namespace std;
#define rep(i, a1, b1) for (int i = a1; i < b1; i++)
#define nl endl
#define ll long long int

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[2 * n];

        rep(i, 0, 2 * n)
        {
            cin >> a[i];
        }
        int j = 0, s = 0;
        rep(i, 0, 2 * n)
        {
            if (a[i] <= n)
            {
                s += abs(i - j);
                j++;
            }
        }
        cout << s << nl;
    }
}