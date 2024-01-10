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

#define rep(i, arr, b) for (ll i = arr; i < (b); i++)
#define repdec(i, arr, b) for (ll i = (arr)-1; i >= b; i--)
#define trav(arr, x) for (auto &arr : x)
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
        int n;
        cin >> n;

        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> odd, even;
        for (int i = 1; i <= n * n; i++)
        {
            if (i & 1)
                odd.push_back(i);
            else
                even.push_back(i);
        }
        vector<vector<int>> arr(n, vector<int>(n, -1));
        vector<vector<int>> ans(n, vector<int>(n, 0));

        if (n % 2 == 0)
        {
            arr[n - 1][n - 1] = 1;
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < n - 1; j++)
                {

                    if (i == j)
                        arr[i][j] = 1;
                    else
                    {
                        if (i > j)
                        {
                            arr[i][j] = 0;
                            arr[j][i] = 1;
                        }
                        else
                        {
                            arr[i][j] = 1;
                            arr[j][i] = 0;
                        }
                    }
                }
            }

            int cnt = (n - 2) / 2;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[i][j] != -1)
                        continue;
                    if (i == n - 1 or j == n - 1)
                    {
                        if (cnt)
                        {
                            arr[i][j] = 1;
                            arr[j][i] = 0;
                            cnt--;
                        }
                        else
                        {
                            arr[i][j] = 0;
                            arr[j][i] = 0;
                        }
                    }
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[i][j] == 0)
                    {
                        ans[i][j] = even.back();
                        even.pop_back();
                    }
                    else
                    {
                        ans[i][j] = odd.back();
                        odd.pop_back();
                    }
                }
            }
            cnt = (n - 2) / 2;
            if ((cnt ^ 1) == (cnt + 1))
            {
                swap(ans[n - 2][0], ans[n - 2][n - 2]);
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << ans[i][j] << " ";
                }
                cout << endl;
            }
            continue;
        }

        arr[0][0] = 1;
        int cnt = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (cnt == (n * n + 1) / 2)
                    break;
                arr[i][j] = 1;
                arr[j][i] = 1;
                cnt += 2;
            }
            if (cnt == (n + 1) / 2)
                break;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == -1)
                {
                    ans[i][j] = even.back();
                    even.pop_back();
                }
                else
                {
                    ans[i][j] = odd.back();
                    odd.pop_back();
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
}