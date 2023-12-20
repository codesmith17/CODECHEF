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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 1000000;
        for (int i = 0; i < n; i++)
        {
            int oks = 0;
            if (i + 1 < n)
                oks = max(oks, abs(a[i + 1] - a[i]));
            if (i - 1 >= 0)
                oks = max(oks, abs(a[i - 1] - a[i]));
            ans = min(ans, oks);
        }
        cout << ans << endl;
    }
}