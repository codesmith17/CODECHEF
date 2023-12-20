#include <bits/stdc++.h>
using namespace std;
#define rep(i, a1, b1) for (int i = a1; i < b1; i++)
#define nl endl
#define ll long long int

int main()
{
    ll t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll o = 0, e = 0;
        o = (n + 1) / 2;
        if (n < 2 * k)
        {
            cout << "NO" << endl;
            continue;
        }
        if (k <= o)
        {
            if ((o - k) % 2 == 0)
                cout << "YES" << nl;

            else
                cout << "NO" << nl;
        }
        else
            cout << "NO" << nl;
    }
}