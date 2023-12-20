#include <iostream>
#include <map>

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
bool checkSubsequence(std::vector<int> &nums, int target)
{
    int n = nums.size();

    for (int mask = 0; mask < (1 << n); mask++)
    {
        int result = 0;

        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                result &= nums[i];
            }
        }

        if (result == target)
        {
            return true;
        }
    }

    return false;
}
int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        vector<int> arr;
        int x = -1;
        for (int i = 0; i < n; i++)
        {
            int f;
            cin >> f;
            arr.push_back(f);
            if ((f & b) == b)
                x = x & f;
        }
        // unordered_set<int> distinct_ands;

        // for (int i = 0; i < arr.size(); i++)
        // {
        //     for (int j = i + 1; j <= arr.size(); j++)
        //     {

        //         int and_value = arr[i] & arr[j - 1];

        //         distinct_ands.insert(and_value);
        //     }
        // }
        // for (auto i : distinct_ands)
        // {

        //     if (i == b)
        //     {
        //         cout << "YES" << endl;
        //         goto label;
        //     }
        // }
        // int x = -1;

        // for (int i = 0; i < n; i++)
        // {
        //     int ax;
        //     cin >> ax;
        //     if ((ax & b) == b)
        //         x &= ax;
        // }
        if (x == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    label:
        int p;
    }
    return 0;
}