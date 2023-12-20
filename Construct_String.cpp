#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cnt = 1;
        string ans = "";
        char c = a[0];

        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
                cnt++;
            else
            {
                if (cnt % 2)
                    ans += c;
                else
                {
                    ans.push_back(c);
                    ans.push_back(c);
                }
                cnt = 1;
                c = a[i];
            }
        }

        if (cnt % 2)

            ans.push_back(c);
        else
        {
            ans.push_back(c);
            ans.push_back(c);
        }

        cout << ans << endl;
    }
    return 0;
}