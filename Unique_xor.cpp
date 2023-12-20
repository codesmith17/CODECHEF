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
        int n = ri(), k = ri();
        string s = rs();
        vector<int> vec1(k, 0);
        vector<int> vec2(k, 0);
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '0')
            {
                vec2[i % k]++;
            }
            else
            {
                vec1[i % k]++;
            }
        }

        int res1 = 0;
        int res2 = 0;
        for (int i = 0; i < k; i++)
        {
            if (vec1[i] % 2 == 1)
            {
                res1 += 1 + (vec1[i] + 1) / 2;
            }
            else
            {
                res1 += (vec1[i] / 2);
            }
        }

        for (int i = 0; i < k; i++)
        {
            if (vec1[i] != 0)
            {
                res2 += (vec2[i]);
            }
            else
            {
                res2 = INT_MAX;
                break;
            }
        }

        cout << min(res1, res2) << endl;
    }
    return 0;
}
