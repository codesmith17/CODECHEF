
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        int ans;
        int x = n;
        x *= (n - 1);
        x /= 2;
        ans = x;

        for (auto iterate : mp)
        {
            int p = iterate.second;
            p *= (iterate.second - 1);
            p /= 2;
            ans -= p;
        }

        cout << ans << endl;
    }
    return 0;
}