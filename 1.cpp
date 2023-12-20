#include <bits/stdc++.h>
using namespace std;
#define rep(i, a1, b1) for (int i = a1; i < b1; i++)
#define nl endl
#define ll long long int
int mod = 1e7;

int main()
{
    ll t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;

        ll cnt = 1;
        for (int i = 0; i < n; i++)
        {
            if (i < k)
                cnt = (cnt * (k - i)) % mod;
            else
                break;
        }
        cout << cnt << nl;
    }
}