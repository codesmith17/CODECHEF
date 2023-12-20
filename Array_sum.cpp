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
void sumOfOddNumbers(int n, vector<int> &arr)
{
    int current = 1;

    while (n > 0)
    {
        arr.push_back(current);
        n -= current;
        current += 2;
    }

    if (n < 0)
    {
        arr.back() += n;
    }
}
int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        int n = ri(), k = ri();
        int eve = n / 2, od = ceil(n / 2);
        if (k < 2 * eve + 1 * od or n % 2 == 1)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> arr;
        for (int i = 0; i < n / 2; i++)
        {
            arr.push_back(2);
            k -= 2;
        }
        vector<int> arr1;
        sumOfOddNumbers(k, arr1);
    }
    return 0;
}