#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {

        long long n, q, x, y;
        cin >> n >> q;
        long long brr[n + 1] = {0};
        long long arr[n];
        for (long long i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        for (int i = 0; i < q; i++)
        {

            cin >> x >> y;
            brr[x - 1] += 1;
            brr[y] -= 1;
        }

        for (long long i = 1; i < n + 1; i++)
        {

            brr[i] += brr[i - 1];
        }

        vector<pair<long long, long long>> vec;
        vector<pair<long long, long long>> vec1;
        for (long long i = 0; i < n; i++)
        {

            vec.push_back({brr[i], i});
        }
        sort(vec.rbegin(), vec.rend());

        long long last = n - 1, ans = 0;
        for (auto it : vec)
        {
            ans += (it.first * arr[last]);
            vec1.push_back({it.second, arr[last]});
            last--;
        }

        cout << ans << endl;
        sort(vec1.begin(), vec1.end());
        for (auto it : vec1)
        {
            cout << it.second << " ";
        }
        cout << endl;
    }
    return 0;
}