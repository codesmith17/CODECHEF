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
string reads()
{
    string a;
    cin >> a;
    return a;
}
int readi()
{
    int a;
    cin >> a;
    return a;
}
long long readll()
{
    long long a;
    cin >> a;
    return a;
}
int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = readi();
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n <= k)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            goto label;
        }

        if (n < 2 * k)
        {
            vector<int> v;
            for (int i = 0; i < n - k; i++)
            {
                v.push_back(a[i]);
            }

            for (int i = n - 1; i >= k; i--)
            {
                v.push_back(a[i]);
            }

            sort(v.begin(), v.end());
            int j = 0;
            for (j = 0; j < n - k; j++)
            {
                cout << v[j] << " ";
            }
            for (int i = n - k; i < k; i++)
            {
                cout << a[i] << " ";
            }
            for (j; j < v.size(); j++)
            {
                cout << v[j] << " ";
            }
            cout << endl;
        }
        else
        {
            sort(a, a + n);
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    label:
        int y;
    }
    return 0;
}