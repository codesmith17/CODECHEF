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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            arr[i] = ri();

        bool flag = true;
        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] < arr[i + 1] and arr[i + 1] > arr[i + 2])
                flag = true;
            else if (arr[i] > arr[i + 1] and arr[i + 1] < arr[i + 2])
                flag = true;
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            for (int i = 0; i < n; i++)
                cout << arr[i] << sp;
            cout << endl;
            continue;
        }
        else
        {
            sort(arr.begin(), arr.end());
            int i = 0;
            int j = 0;
            vector<int> brr(n);
            for (i = 0, j = 0; j < n, i < n; i++, j += 2)
            {
                brr[j] = arr[i];
            }

            for (int k = 1; k < n, i < n; k += 2, i++)
            {
                brr[k] = arr[i];
            }
            for (auto it : brr)
                cout << it << sp;
            cout << endl;
        }
    }
    return 0;
}