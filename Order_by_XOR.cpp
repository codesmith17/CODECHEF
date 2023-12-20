#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)

    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (a > b && b < c)
            cout << -1 << endl;   
        else if (a < b && c < b)
            cout << "-1" << endl;
        else if (a < b && b < c)
            cout << 0 << endl;
        else
        {
            ll ans = max(a, max(b, c));
            ll k = log2(ans);
            ll p = pow(2, k + 1);
            cout << p - 1 << endl;
        }
    }
}