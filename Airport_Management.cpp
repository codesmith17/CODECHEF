#include <iostream>
#include <map>
/*(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧*/
#include <algorithm>
#include <numeric>
#include <set>
#include <cmath>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;
#define pb push_back
string rs()
{
    string a;
    cin >> a;
    return a;
}
int ri()
{
    int a;
    cin >> a;
    return a;
}
long long rll()
{
    long long a;
    cin >> a;
    return a;
}
int findPlatform(int arr[], int dep[], int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);

    int ans = 1;
    int count = 1;
    int i = 1, j = 0;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j]) // one more platform needed
        {
            count++;
            i++;
        }
        else // one platform can be reduced
        {
            count--;
            j++;
        }
        ans = max(ans, count); // updating the value with the current maximum
    }
    return ans;
}
int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = ri();
    while (t--)
    {
        int n = ri();
        int at[n], dt[n];
        for (int i = 0; i < n; i++)
            at[i] = ri();
        for (int i = 0; i < n; i++)
            dt[i] = ri();
        // cout << findPlatform(at, dt, n) << endl;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
            mp[at[i]]++;
        for (int i = 0; i < n; i++)
            mp[dt[i]]++;
        int max1 = INT_MIN;
        for (auto it : mp)
        {
            max1 = max(it.second, max1);
        }
        cout << max1 << endl;
    }
    return 0;
}