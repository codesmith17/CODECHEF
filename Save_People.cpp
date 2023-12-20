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
bool isValid(int x, int y, vector<vector<int>> &vis, int n, int m)
{
    if (x >= 0 and y >= 0 and x < n - 1 and y < m - 1 and vis[x][y] == 0)
        return true;
    return false;
}
int32_t main(int argc, char *argv[])
{
    int t = ri();
    while (t--)
    {
        long long int n = ri(), m = ri();
        long long int x = ri(), y = ri();
        x--;
        y--;

        // if (x - 1 >= 0 and y - 1 >= 0)
        // {
        //     queue < pair<int, pair<int, int>> qi, qv;
        //     vector<vector<int>> vis1(n, vector<int>(m, 0));
        //     vector<vector<int>> vis2(n, vector<int>(m, 0));
        //     vis2[x][y] = 1;
        //     vis1[x - 1][y - 1] = 1;
        //     int count1 = 1;
        //     int count2 = 1;
        //     qi.push({count1, {x, y}});
        //     qv.push({count2, {x - 1, y - 1}});
        //     while (!qi.empty() and !qv.empty())
        //     {
        //         int xv = qv.front().first;
        //         int yv = qv.front().second;
        //         int xi = qi.front().first;
        //         int yi = qi.front().second;
        //         if (xi >= 0 and xi < n and yi >= 0 and yi < m and vis1[xi][yi] == 0)
        //         {
        //             q1.push({count1 + 1, {xi, yi}});

        //         }
        //     }
        // }
        x++;
        y++;
        cout << (max({(n - x) * m, (y - 1) * n, (m - y) * n, (x - 1) * m})) << endl;
    }
    return 0;
}