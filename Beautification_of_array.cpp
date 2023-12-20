
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
using namespace std;

using ll = long long;
const int MD = 1e9 + 7;

int run(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int sol(int a, int b)
{
    if (a % b)
        return a;
    else
        return b % 100;
}

bool is(ll minValue, vector<ll> &arr, ll k)
{
    ll c = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < minValue)
            c += minValue - arr[i];
        else
            break;
    }
    return c <= k;
}

int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k, minVal = 0;
        cin >> n >> k;
        vector<ll> arr(n), v(n, 0);
        for (auto &c : arr)
            cin >> c;
        sort(arr.begin(), arr.end());
        // vector

        for (int i = 0; i < n; i++)
            v[i]++;

        for (int i = 0; i < n; i++)
            v[i] += 10;
        ll lo = 0, hi = 1e10, mid;
        while (hi - lo > 1)
        {
            mid = (hi + lo) / 2;
            if (is(mid, arr, k))
                lo = mid;
            else
                hi = mid - 1;
        }

        if (is(hi, arr, k))
            minVal = hi;
        else
            minVal = lo;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < minVal)
            {
                k -= (minVal - arr[i]);
                arr[i] = minVal;
            }
        }

        for (int i = 0; i < k; i++)
            arr[i]++;

        ll sum = 0;
        for (int i = 0; i < n; i++)
            sum = (sum + arr[i]) % MD;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            sum = (sum - arr[i] + MD) % MD;
            ans = (ans + arr[i] * sum) % MD;
        }
        cout << ans << '\n';
    }

    return 0;
}
