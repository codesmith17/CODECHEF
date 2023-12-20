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
    long long int t = ri();
    while (t--)
    {

        int n, h;
        cin >> n >> h;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            v[i] = ri();
        }

        long long int s = 0, e = *max_element(v.begin(), v.end());
        long long int ans = -1;
        while (s <= e)
        {
            long long int mid = s + (e - s) / 2;
            long long int power = h;
            for (long long int i = 0; i < v.size(); i++)
            {
                if (v[i] > mid)
                {
                    power -= v[i];
                }
            }
            if (power > 0)
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}