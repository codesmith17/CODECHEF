#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        int forward[n + 1], backward[n + 1];
        int forgcd = 0, backgcd = 0;
        for (int i = 1; i <= n; i++)
        {
            forgcd = __gcd(forgcd, arr[i]);
            forward[i] = forgcd;
        }
        for (int i = n; i >= 1; i--)
        {
            backgcd = __gcd(backgcd, arr[i]);
            backward[i] = backgcd;
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int k = 0;
            // for (int i = 1; i <= l - 1; i++)
            //     k = __gcd(k, arr[i]);
            // for (int i = r + 1; i <= n; i++)
            //     k = __gcd(k, arr[i]);

            cout << __gcd(backward[r + 1], forward[l - 1]) << endl;
        }
    }
    return 0;
}