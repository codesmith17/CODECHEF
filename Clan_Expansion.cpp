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
        int n = ri();
        vector<int> v(n, 0);

        for (int i = 0; i < n; i++)
            v[i] = ri();
        vector<int> prev2(n + 1, -1), prev(n + 1, -1);
        for (int i = 0; i < n; i++)
        {
            int now = v[i];

            int review = prev2[now];
            prev2[now] = i;
            if (review > -1)
                prev[now] = max(prev[now], (i - review) >> 1);
            else
                prev[now] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            prev2[i]++;
            prev[i] = max(prev[i], n - prev2[i]);
            prev2[i]--;
        }
        int ans = 1e9, result;
        for (int i = n; i >= 0; i--)
        {
            if (i == 0)
                goto label;
            if (prev[i] >= 0 and prev[i] <= ans)
            {
                ans = prev[i];
                result = i;
            }
        }
    label:
        cout << result << sp << ans << endl;
    }
    return 0;
}