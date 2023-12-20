
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
        int count = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = x;
            count += x;
        }

        if (n % 2 == 1)
        {
            if (count % 2 == 1)
            {
                cout << "CHEF" << endl;
            }
            else
            {
                cout << "CHEFINA" << endl;
            }
        }
        else
        {
            int x = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                x = min(x, a[i]);
            }
            if (x == 1)
            {
                cout << "CHEF" << endl;
                continue;
            }

            if (count % 2 == 0 && x % 2 == 0)
            {
                cout << "CHEFINA" << endl;
            }
            else
            {
                cout << "CHEF" << endl;
            }
        }
    }
    return 0;
}