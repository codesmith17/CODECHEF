#include <bits/stdc++.h>
using namespace std;
#define rep(i, a1, b1) for (int i = a1; i < b1; i++)
#define nl endl
#define ll long long int

int main()
{
   
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x == y)
        {
            {
                if (x % 2 == 0)
                    cout << "CHEFINA" << nl;
                else
                    cout << "CHEF" << nl;
            }
        }
        else if (x > y)
        {
            if (x - y >= 2)
                cout << "CHEF" << nl;
            else
            {
                if (x % 2 == 0)
                    cout << "CHEF" << nl;
                else
                    cout << "CHEFINA" << nl;
            }
        }
        else
        {
            if (y - x >= 2)
                cout << "CHEFINA" << nl;
            else
            {
                if (y % 2 != 0)
                    cout << "CHEFINA" << nl;
                else
                    cout << "CHEF" << nl;
            }
        }
    }
    return 0;
}