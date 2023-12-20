#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int oks = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            oks += v[i];
            if (oks == (i + 1))
                count++;
        }
        cout << count << endl;
    }

    return 0;
}