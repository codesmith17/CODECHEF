#include <bits/stdc++.h>
using namespace std;

int main()
{
    // printf("Hello World");
    int t;
    cin >> t;
    while (t--)
    {
        int ans;

        int n;
        cin >> n;
        string s;
        cin >> s;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (i & 1)
                    odd++;
                else
                    even++;
            }
        }

        if (odd && even)
            ans = 1;
        else
            ans = 2;

        cout << ans << endl;
    }
    return 0;
}