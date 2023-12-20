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
        int a = ri(), b = ri();
        int cnt = 0, cnt1 = 0, cnt2 = 0;
        if (a < b)
            while (1)
            {
                if (a % b == 0)
                {
                    cout << cnt << endl;
                    break;
                }
                else
                {
                    cnt++;
                    a++;
                    b--;
                }
            }
        else
        {
            int a1 = a, b1 = b;
            while (a1 % b1 != 0)
            {
                a1++;
                b1--;
                cnt1++;
            }
            int a2 = a, b2 = b;
            while (a2 % b2 != 0)
            {
                a2--;
                b2++;
                cnt2++;
            }
            cout << min(cnt1, cnt2) << endl;
        }
    }
    return 0;
}