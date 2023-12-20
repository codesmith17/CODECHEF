#include <bits/stdc++.h>
using namespace std;

#define int long long int

int oks(int n, vector<int> &v1, int mid)
{
    vector<int> vec = v1;
    if (vec[0] > mid)
        return 0;

    for (int i = 1; i < n; i++)
    {
        if (vec[i - 1] < mid)
            vec[i] = vec[i] - (mid - vec[i - 1]), vec[i - 1] = mid;
        if (vec[i] > mid)
            return 0;
    }

    if (*max_element(begin(vec), end(vec)) > mid)
        return 0;
    return 1;
}

void main()
{

    int t ;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        int i = 0;
        int j = *max_element(begin(vec), end(vec));
        int min1 = INT_MAX;
        while (i <= j)
        {
            int mid = (i + j) / 2;
            if (oks(n, vec, mid) == 1)
            {
                min1 = min(min1, mid);
                j = mid - 1;
            }
            else if (oks(n, vec, mid) == 0)
            {
                i = mid + 1;
            }
        }
        cout << min1 << endl;
    }
}
