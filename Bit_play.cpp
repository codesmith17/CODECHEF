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
const int mod = 1e9 + 7;
int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        int n = ri();
        string s = rs();
        vector<long long int> vec;
        long long int res = 1;
        for (int i = 2; i < n; i += 2)
        {

            if (s[i - 2] != s[i - 1] and s[i] == '1')
            {
                vec.push_back(2);
            }
            else if (s[i - 2] != s[i - 1] and s[i] == '0')
            {
                vec.push_back(1);
            }
            else if (s[i - 2] == '1' and s[i] == '1')
            {
                vec.push_back(2);
            }
            else if (s[i - 2] == '1' and s[i] == '0')
            {
                vec.push_back(1);
            }
            else if (s[i] == '1')
            {

                vec.push_back(0);
            }
            else
                vec.push_back(3);
        }

        for (int i = 0; i < vec.size(); i++)
        {
            res *= vec[i];
            res %= mod;
            if (i == vec.size() - 1)
                cout << res % mod << endl;
        }
    }
    return 0;
}