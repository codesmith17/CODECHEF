#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        if (n == 0)
        {
            cout << "1"
                 << " "
                 << "3"
                 << " "
                 << "4"
                 << " "
                 << "5" << endl;
            continue;
        }
        long long int a = 1LL << 47;
        long long int b = 1LL << 22;
        long long int oks = log2(n) + 2;
        long long int c = (1LL << oks) - 1;
        long long int d = c ^ n;
        if (a == c || a == d || c == d || b == c || b == d)
            cout << -1 << endl;
        else
            cout << a << " " << b << " " << c << " " << d << endl;
    }
    return 0;
}