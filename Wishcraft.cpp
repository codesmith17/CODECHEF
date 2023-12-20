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
#include <bits/stdc++.h>
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
        long long int n = rl();
        long long int p = rl(), q = rl();
        vector<long long int> arr(n);
        for (int i = 0; i < n; i++)
            arr[i] = rl();

        sort(arr.begin(), arr.end());

        while (arr.size() > 2 and p > 0 and arr[arr.size() - 2] > 0)
        {
            long long int v = arr[arr.size() - 1] + arr[arr.size() - 2];
            arr.pop_back();
            arr.pop_back();
            arr.push_back(v);
            p--;
        }

        for (int i = 0; i < arr.size() / 2; i++)
            swap(arr[i], arr[arr.size() - i - 1]);

        while (arr.size() > 2 and p > 0 and arr[arr.size() - 2] < 0)
        {
            long long int v = arr[arr.size() - 1] + arr[arr.size() - 2];
            arr.pop_back();
            arr.pop_back();
            arr.push_back(v);
            p--;
        }

        for (int i = 0; i < arr.size() / 2; i++)
            swap(arr[i], arr[arr.size() - i - 1]);

        while (arr.size() > 2 and arr[arr.size() - 2] > 0 and q > 0)
        {

            arr[0] -= arr[arr.size() - 2];
            arr.erase(arr.begin() + arr.size() - 2);
            q--;
        }

        for (int i = 0; i < arr.size() / 2; i++)
            swap(arr[i], arr[arr.size() - i - 1]);

        while (arr.size() > 2 and arr[arr.size() - 2] < 0 and q > 0)
        {

            arr[0] -= arr[arr.size() - 2];
            arr.erase(arr.begin() + arr.size() - 2);
            q--;
        }

        cout << -arr[arr.size() - 1] + arr[0] << endl;
    }
    return 0;
}