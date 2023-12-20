#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, q;
    cin >> n >> m >> q;

    for (int i = 0; i < q; i++)
    {
        long long int x;
        cin >> x;
        long long int oks = 0;
        while (oks < n)
        {
            if (x <= oks)
            {
                break;
            }
            else
            {
                x = x - oks - 1;
            }
            oks++;
        }
        cout << 1 << " " << oks << endl;
        vector<long long int> a;
        while (oks >= 1)
        {
            a.push_back(min(x / oks, m - 1));
            x -= a.back() * oks;
            oks--;
        }
        for (int i = a.size() - 1; i >= 0; i--)
        {
            cout << a[i] + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}