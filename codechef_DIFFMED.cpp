#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, k, s;
    while (t--)
    {
        k = 0;
        s = 0;
        int arr[2000];
        cin >> n;
        arr[1] = 0;
        
        for (int i = 2; i <= n; ++i)
        {
            if (i % 2 == 0)
                arr[i] = --k;
            else
                arr[i] = ++s;
        }
        for (int i = 1; i <= n; ++i)
            cout << arr[i] - k + 1 << " ";
        cout << endl;
    }
    return 0;
}