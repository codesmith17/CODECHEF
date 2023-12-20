#include <bits/stdc++.h>

using namespace std;


int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m, c, a, t;
        char s[200002];
        c = 0;
        a = 0;
        t = 0;
        cin >> n >> m >> (s + 1);
        for (int i = 1; i <= n; ++i)
            if (s[i] == '1')
                c++;
        if (c == 0)
        {
            cout << n * m << endl;
            continue;
        }
        if (c * m % 2 == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (m % 2 == 0)
        {
            for (int i = 1; i <= n; ++i)
            {
                if (s[i] == '1')
                    break;
                a++;
            }
            for (int i = n; i >= 1; --i)
            {
                if (s[i] == '1')
                    break;
                a++;
            }
            cout << a + 1 << endl;
            continue;
        }
        for (int i = 1; i <= n; ++i)
        {
            if (s[i] == '1')
                t++;
            if (t == c / 2)
                a++;
        }
        cout << a << endl;
    }
}