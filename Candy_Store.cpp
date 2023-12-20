#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (b <= a)
        {
            cout << b << endl;
            continue;
        }
        else
        {
            int extra = b - a;
            int ans = a + (extra * 2);
            cout << ans << endl;
        }
    }
    return 0;
}