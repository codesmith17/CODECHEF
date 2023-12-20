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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int oks = v[n - 1] + v[n - 2];
        int max1 = 0;
        int i;
        int r = n - 1;
        for (i = 0; i < r; i++, r--)
        {
            max1 = max(max1, v[i] + v[r]);
        }
        if (n % 2 = 1)
        {
            max1 = max(max1, min(v[i] + v[i + 1], v[i - 1] + v[i]));
        }
        if (max1 < oks)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}