#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v1;
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        int min1 = INT_MAX;
        sort(v1.begin(), v1.end());

        for (int i = 0; i <= n; i++)
        {
            min1 = min(min1, abs(v1[i] - v1[i + n - 1]));
        }
        cout << min1 << endl;
    }

    return 0;
}