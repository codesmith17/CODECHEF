#include <iostream>
#include <map>
#include <algorithm>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
#include <climits>
#include <cstdint>
#include <math.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef unordered_map<ll, ll> unmap;
typedef vector<vector<ll>> vll;

#define rep(i, a, b) for (ll i = a; i < (b); i++)
#define repdec(i, a, b) for (ll i = (a)-1; i >= b; i--)
#define trav(a, x) for (auto &a : x)
#define sp " "
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define pf push_front
int ri()
{
    int n;
    cin >> n;
    return n;
}
long long int rl()
{
    long long int n;
    cin >> n;
    return n;
}
string rs()
{
    string n;
    cin >> n;
    return n;
}
const int mod = 1e7 + 9;
vector<long long int> factorial_mod(int n)
{
    vector<long long int> factorial(n + 1, 1);
    for (int i = 2; i <= n; ++i)
    {
        factorial[i] = (factorial[i - 1] * i) % mod;
    }
    return factorial;
}
long long int modFact(int n, int p)
{
    if (n >= p)
        return 0;

    int result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % p;

    return result;
}
int32_t main(int argc, char *argv[])
{
    vector<long long int> fact = factorial_mod(1e5);
    int t = ri();
    while (t--)
    {
        int n = ri(), k = ri();
        vector<int> vec(n);
        int odd = 0, even = 0;

        for (int i = 0; i < n; i++)
        {
            vec[i] = ri();
            if (vec[i] % 2)
                odd++;
            else
                even++;
        }
        if (k == 0 and even > 0 and odd > 0)
        {
            cout << 0 << endl;
            continue;
        }
        else if (k == 1 and ((even - odd) > 1 or odd - even > 1))
        {
            cout << 0 << endl;
            continue;
        }
        int ans = fact[even] % mod * fact[odd] % mod;
        if (k == 1 and odd == even)
            ans = ans * 2 % mod;
        cout << ans << endl;
    }
    return 0;
}