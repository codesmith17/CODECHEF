#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int f = 0;
        int r = 0;
        int ans = 0;
        int max1 = INT_MAX;
        while (r < k - 1 && r < n - 1)
        {
            if (s[r] != s[r + 1])
                ans++;
            r++;
        }
        for (int i = k - 1; i < n; i++)
        {
            if (i != k - 1)
            {
                int x = i - k;
                if (s[x] != s[x + 1])
                    ans--;

                int y = 1 - ((int)(s[i] - 48));
                max1 = min(max1, ans + y);
                if (i < n - 1)
                {
                    if (s[i] != s[i + 1])
                        ans++;
                }
            }
            else
            {
                int y = 1 - ((int)(s[i] - 48));
                max1 = min(max1, ans + y);
                if (i < n - 1)
                {
                    if (s[i] != s[i + 1])
                        ans++;
                }
            }
        }
        cout << max1 << "\n";
    }
    return 0;
}
