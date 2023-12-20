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
        vector<int> v1, v2, v3;
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            if (v1[i] > n)
            {
                v2.push_back(i + 1);
            }
        }
        for (int i = n; i < 2 * n; i++)
        {
            if (v1[i] <= n)
            {
                v3.push_back(i + 1);
            }
        }
        sort(v2.begin(), v2.end());
        sort(v3.begin(), v3.end());
        int size = v2.size();
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            count = count + abs(v2[i] - v3[i]);
        }
        cout << count << endl;
    }

    return 0;
}