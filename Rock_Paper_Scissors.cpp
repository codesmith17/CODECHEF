
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
        string a = rs();
        int paper = count(a.begin(), a.end(), 'R');

        if (count(a.begin(), a.end(), 'R') > n / 2)
        {
            string s(n, 'P');
            cout << s << endl;
        }
        else
        {
            string ans;

            for (int j = n - 1; j >= 0; j--)
            {
                if (paper <= (n) / 2)
                {
                    if (a[j] == 'P')
                    {
                        ans.push_back('S');
                        paper++;
                    }
                    else if (a[j] == 'S')
                    {
                        ans.push_back('R');
                        paper++;
                    }
                    else
                    {
                        ans.push_back('P');
                    }
                }
                else
                {
                    ans.push_back('P');
                }
            }
            reverse(ans.begin(), ans.end());
            cout << ans << endl;
        }
    }

    return 0;
    return 0;
}