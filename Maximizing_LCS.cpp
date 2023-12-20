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
        int k = n / 2;
        string a;
        cin >> a;
        string b, c;
        b = a;
        c = a;

        // b.erase(k, k);
        // c.erase(0, k);
        // cout << b << " " << c;
        reverse(c.begin(), c.end());

        vector<int> dp(a.size(), 0);
        for (int i = a.size() - 1; i >= 0; i--)
        {
            int prev = 1;
            for (int j = i + 1; j < a.size(); j++)
            {
                int curr;
                if (a[i] == a[j])
                    curr = 2 + dp[j - 1];
                else
                    curr = max(prev, dp[j]);
                dp[j - 1] = prev;
                prev = curr;
            }
            dp[a.size() - 1] = prev;
        }
        cout << dp[a.size() - 1] / 2 << endl;
    }

    return 0;
}