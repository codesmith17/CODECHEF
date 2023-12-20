#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5;

int32_t main()
{
    int t[N + 1];
    int cnt[N + 1];
    memset(t, -1, sizeof(t));
    for (int i = 0; i <= N; i++)
        cnt[i] = 0;
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        map<int, int> m;

        int v[n];

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v[i] = a;
            m[a]++;
        }
        bool flag = true;
        for (auto p : m)
        {
            int a = p.second;
            int b = p.first;
            if (a % b)
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            cout << -1 << endl;
            continue;
        }

        int ansss[n];
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            if (t[v[i]] == -1)
            {
                t[v[i]] = count++;
                cnt[v[i]] = v[i];
            }
            if (cnt[v[i]] == 0)
            {
                t[v[i]] = count++;
                cnt[v[i]] = v[i];
            }

            ansss[i] = t[v[i]];
            cnt[v[i]]--;
        }
        for (int i = 0; i < n; i++)
            cout << ansss[i] << " ";

        cout << endl;
    }

    return 0;
}
