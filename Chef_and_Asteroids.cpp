#include <bits/stdc++.h>
using namespace std;

const long long int MOD = 1e9 + 7;
const int N = 1e5 + 1;

long long int power(long long x, long long int y, long long int p)
{
    int res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
               // equal to p

    if (x == 0)
        return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    long long int factorial[N], inverse[N];
    factorial[0] = inverse[0] = 1;
    for (int i = 1; i < N; i++)
    {
        factorial[i] = (i * factorial[i - 1]) % MOD;
        inverse[i] = power(factorial[i], MOD - 2, MOD);
    }

    long long int n;
    cin >> n;
    map<long long, long long> mp;
    for (long long int j = 0; j < n; j++)
    {
        long long x, y;
        cin >> x >> y;
        mp[x]++;
    }
    long long int oks = 1;
    map<long long, long long>::iterator itr;
    for (itr = mp.begin(); itr != mp.end(); itr++)
    {
        int val = itr->second;
        int value = factorial[val];
        oks = (oks * value % MOD);
        oks = oks % MOD;
    }
    cout << (oks * inverse[n]) % MOD << endl;
    return 0;
}