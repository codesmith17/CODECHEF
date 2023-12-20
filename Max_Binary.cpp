#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ok1 = 0, ok2 = 0;
        vector<int> vec1 = {1}, vec2 = {0};
        // vec1.push_back(1);
        // vec2.push_back(0);
        for (int i = 0; i < n - 1; i++)
        {
            int p1 = (vec1[i]) ^ (s[i] - '0');
            int p2 = (vec2[i]) ^ (s[i] - '0');
            vec1.push_back(p1);
            vec2.push_back(p2);
        }

        for (int i = 0; i < n; i++)
        {
            if (vec1[i] == 1)
                ok1++;
            if (vec2[i] == 1)
                ok2++;
        }
        cout << max(ok1, ok2) << endl;
    }
    return 0;
}