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

        long long int n;
        cin >> n;
        if (n < 3)
            cout << 0 << endl;
        else
            cout << 2 + (((n - 1) / 2) - 1) * 3 + (((n) / 2) - (n - 1) / 2) << endl;
    }
    return 0;
}