#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, y;
        cin >> n >> y;
        vector<int> v;
        int give = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
            give = v[i] | give;
        }
       

    return 0;
}
