#include <bits/stdc++.h>
using namespace std;

bool chk(int mid, vector<int> &a)
{
    int n = a.size();
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= mid && a[i] >= (-1 * mid))
        {
            flag = false;
        }
    }
    return flag;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int low = 0, high = 1000000000;
        int ans = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (chk(mid, a))
            {
                low = mid + 1;
                ans = mid;
            }
            else
            {
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }
}