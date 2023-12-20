#include <bits/stdc++.h>

using namespace std;
const long long m = 1000000007;
#define ll long long

ll binpow(ll a, ll b)
{
    a %= m;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

ll countSetBits(ll n)
{
    if (n == 0)
        return 0;
    else
        return (n & 1) + countSetBits(n >> 1);
}

int main()
{

    cout << 1LL * pow(2, 60) << endl;

    return 0;
}