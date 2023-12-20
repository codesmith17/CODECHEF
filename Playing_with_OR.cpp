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
int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        int ans = 0;
        int even = 0, odd = 0;
        int n = ri(), k = ri();
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            v[i] = ri();

        int j = 0;
        while (k--)
        {
            if (v[j] & 1)
                odd++;
            else
                even++;

            j++;
        }
        if (odd > 0)
        {
            ans++;
        }
        for (int i = 0;; i++)
        {
            if (j >= n)
                break;
            if (v[i] & 1)
                odd--;
            else
                even--;

            if (v[j] & 1)
                odd++;
            else
                even++;

            if (odd > 0)
            {
                ans++;
            }
            j++;
        }

        cout << ans << endl;
    }
    return 0;
}