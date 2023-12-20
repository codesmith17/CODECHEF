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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;

        for (int i = 0; i < n; i++)
            mp[a[i]]++;
        for (int i = 0; i < n; i++)
            cout << mp[a[i]] << endl;

        for (int i = 0; i < n; i++)
        {

            if (mp[a[i]] % a[i] != 0)
            {
                cout << -1 << endl;
                exit(0);
            }
        }

        vector<int> ans;

        map<int, int> freq;
        map<int, int> f;

        ans.push_back(1);
        freq[a[0]] = 1;
        int oks = freq[a[0]];
        f[a[0]]++;

        for (int i = 1; i < n; i++)
        {

            if (freq.find(a[i]) == freq.end())
            {
                ans.push_back(oks);
                freq[a[i]] = oks;
                f[a[i]]++;
                oks++;
            }

            else
            {
                freq[a[i]] = oks;
                ans.push_back(oks);
                oks++;
                f[a[i]]++;
            }
        }

        for (auto pr : ans)
            cout << pr << " ";
        cout << endl;
    }

    return 0;
}