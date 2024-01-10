#include <iostream>
#include <map>
#include <algorithm>
#include <numeric>
#include <set>
#include <stack>
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
        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            int a = ri();
            arr.push_back(a);
        }
        int maxi = arr[0], ans = -0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] < maxi)
                ans++;

            maxi = max(maxi, arr[i]);
        }
        cout << ans << endl;
    }
    return 0;
}