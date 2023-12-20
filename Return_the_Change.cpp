#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int rem = n % 10;
        int quo = n / 10;
        if (rem >= 5)
        {
            cout << 100 - (quo + 1) * 10 << endl;
        }
        else
        {
            cout << 100 - (quo)*10 << endl;
        }
    }
    return 0;
}