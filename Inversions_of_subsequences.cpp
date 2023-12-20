#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 998244353;
//Geeks for Geeks mod_expo function
int powerby2(int base, int exp)
{
    //enter base here
    //enter exponent here
    int result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (1LL * result * base) % MOD;
        }
        base = (1LL * base * base) % MOD;
        exp = exp / 2;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> pichse(n), aagese(n), aagepiche(n, 1);

        pichse[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            pichse[i] = max(pichse[i - 1], arr[i]);
        }

        aagese[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            aagese[i] = min(aagese[i + 1], arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (i < n - 1 && arr[i] > aagese[i + 1])
            {
                aagepiche[i] = 0;
            }
            if (i > 0 && arr[i] < pichse[i - 1])
            {
                aagepiche[i] = 0;
            }
        }

        int count = 0;
        for (int i = 0; i < aagepiche.size(); i++)
            if (aagepiche[i] == 1)
                count++;
        int ans = powerby2(2, count);
        if (count == n)
        {
            ans = (ans - 1 + MOD) % MOD;
        }
        cout << ans << endl;
    }

    return 0;
}
