#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        pair<int, int> k;
        k.first = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] != k.first)
            {
                k.second = arr[i];
                break;
            }
        }
        cout << k.first + k.second << endl;
    }
    return 0;
}