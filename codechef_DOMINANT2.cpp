
#include <bits/stdc++.h>
using namespace std;

int okidoki()
{
    int n;
    cin >> n;
    vector<int> hithere;
    map<int, int> iiitn;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        iiitn[j]++;
    }
    for (auto i : iiitn)
    {
        hithere.push_back(i.second);
    }

    if (hithere.size() == 1)
    {
        cout << "YES" << endl;
        return 0;
    }
    sort((hithere).begin(), (hithere).end());
    if (hithere[hithere.size() - 1] > hithere[hithere.size() - 2])
        cout << "YES" << endl;
    else
        cout << "N0" << endl;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        okidoki();
        return 0;
}