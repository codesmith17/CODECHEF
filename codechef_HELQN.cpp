
#include <bits/stdc++.h>
using namespace std;

void kkt()
{
    int x;

    cin >> x;
    for (int i = 1; i * i <= x; ++i)
        if ((x - 2 * i) % (i + 2) == 0 && x != 2 * i)
        {
            cout << "YES" << endl;

            return;
        }
    cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        kkt();
        return 0;
}