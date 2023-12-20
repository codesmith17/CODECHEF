
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

int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> s;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (b == l)
                s.push_back(a);
        }
        if (s.size() == 0)
            cout << -1 << endl;
        else
        {
            sort(s.begin(), s.end(), greater<int>());

            int ans = 0;
            int min1;
            if (s.size() > k)
                min1 = k;
            else
                min1 = s.size();
            for (int i = 0; i < min1; i++)
                ans += s[i];
            if (s.size() < k)
                cout << -1 << endl;
            else
                cout << ans << endl;
        }
    }
    return 0;
}
