#include <iostream>
#include <map>
#include <algorithm>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <queue>
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
        ll N, M;
        cin >> N >> M;
        vector<vector<ll>> G(N);
        rep(i, 0, M)
        {
            ll s, t;
            cin >> s >> t;
            s--;
            t--;
            G[s].pb(t);
            G[t].pb(s);
        }

        queue<pair<ll, ll>> q;
        q.push(mp(0, 0));
        ll cur = 0;
        vector<ll> odd(N, 0);
        vector<ll> even(N, 0);

        while (!q.empty())
        {
            pair<ll, ll> p = q.front();
            q.pop();
            ll d = p.first;
            ll v = p.second;
            if (d > 2 * N)
                continue;
            if (d != cur)
            {
                bool ok = true;
                for (int i = 0; i < N; i++)
                {
                    if (cur % 2 && !odd[i])
                    {
                        ok = false;
                        break;
                    }
                    if (cur % 2 == 0 && !even[i])
                    {
                        ok = false;
                        break;
                    }
                }
                if (ok)
                {
                    cout << cur << endl;
                    goto label;
                }
                cur = d;
            }
            if (d % 2 == 1 && odd[v])
                continue;
            if (d % 2 == 0 && even[v])
                continue;
            if (d % 2)
                odd[v] = 1;
            else
                even[v] = 1;
            for (auto u : G[v])
            {
                q.push(mp(d + 1, u));
            }
        }
        cout << -1 << endl;
    label:
        int k;
    }
    return 0;
}