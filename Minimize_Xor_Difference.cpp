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

        int x = 30;

        vector<int> arr(31, 0), brr(31, 0);
        int i = 0;
        for (int i = 0; i <= 30; i++)
        {
            arr[i] = a & 1;
            brr[i] = b & 1;
            a = a >> 1;
            b = b >> 1;
        }

        bool flag = false;
        for (int i = 30; i >= 0; i--)
        {
            if (arr[i] != brr[i])
            {
                if (arr[i] == 1)
                {
                    flag = true;
                    arr[i] = 0;
                    int count = 1;
                    int ans = 0;
                    for (int i = 0; i < arr.size(); i++)
                    {
                        ans += (arr[i]) * (count);
                        count *= 2;
                    }
                    cout << ans << endl;
                }
                arr[i] = 0;
                brr[i] = 0;
                break;
            }
        }
        int ans = 0;
        if (!flag)
        {
            int count = 1;
            for (int i = 0; i < brr.size(); i++)
            {
                ans += (brr[i]) * (count);
                count *= 2;
            }
            cout << ans << endl;
        }
    }

    return 0;
}