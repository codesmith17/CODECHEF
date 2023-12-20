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
void swape(int &a, int &b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}
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
        if (n == 2 or n == 3)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }
        for (int i = 0; i < n - 2; i++)
        {
            if (i % 4 <= 1)
                swap(a[i], a[i + 2]);
        }
        if (n % 4 == 1)
        {
            swape(a[n - 3], a[n - 1]);

            swape(a[n - 1], a[n - 2]);
        }
        if (n % 4 == 2)
        {
            swape(a[n - 4], a[n - 2]);
            swape(a[n - 3], a[n - 1]);
            swape(a[n - 2], a[n - 1]);
        }
        if (n % 4 == 3)
        {
            swape(a[n - 5], a[n - 2]);
            swape(a[n - 5], a[n - 4]);
            swape(a[n - 5], a[n - 1]);
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << sp;
        cout << endl;
    }
    return 0;
}