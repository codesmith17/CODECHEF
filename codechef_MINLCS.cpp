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
        string a, b;
        cin >> a >> b;
        int counter[26], counter1[26];
        for (int i = 0; i < 26; i++)
        {
            counter[i] = 0;
            counter1[i] = 0;
        }
        for (int i = 0; i < n; ++i)
        {
            counter[a[i] - 'a']++;
        }
        for (int i = 0; i < n; ++i)
        {
            counter1[b[i] - 'a']++;
        }
        int res = 0;
        for (int i = 0; i < 26; ++i)
        {
            res = max(res, min(counter[i], counter1[i]));
        }
        cout << res << endl;
    }

    return 0;
}