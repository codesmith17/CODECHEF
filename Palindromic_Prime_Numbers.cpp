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
vector<int> primes;
vector<int> generate_primes(int n)
{
    vector<bool> isPrime(n + 1, true);

    for (int p = 2; p * p <= n; p++)
    {
        if (isPrime[p])
        {
            for (int i = p * p; i <= n; i += p)
            {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p <= n; p++)
    {
        if (isPrime[p])
        {
            primes.push_back(p);
        }
    }

    return primes;
}
int checkPalindrome(string str)
{
    int len = str.length();

    for (int i = 0; i < len / 2; i++)
    {

        if (str[i] != str[len - i - 1])
            return false;
    }

    return true;
}
int32_t main(int argc, char *argv[])
{
    generate_primes(1e5 + 1);
    int t = ri();
    while (t--)
    {
        int n = ri();
        if (n <= 4)
        {
            cout << 0 << sp << n << endl;
        }
        else
        {
            cout << 1 << sp << n - 1 << endl;
        }
    }
    return 0;
}