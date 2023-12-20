

#include <bits/stdc++.h>
using namespace std;

// int func2(int arr[], int N, int K,
//           int oks, vector<vector<int>> &x)
// {

//     if (N == 0)
//     {

//         return oks == 0;
//     }

//     if (x[N][oks] != -1)
//     {
//         return x[N][oks];
//     }
//     int X = 0, Y = 0;
//     if (X + Y >= 1)
//     {
//         return -10;
//     }

//     X = func2(arr, N - 1, K,
//               (oks * arr[N - 1]) % K, x);

//     Y = func2(arr, N - 1, K,
//               oks, x);

//     return X + Y;
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            k = k / gcd(k, arr[i]);
        }
        if (k == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        // if (k == -10)
        //     cout << "NO" << endl;
        // else
        //     cout << "YES" << endl;
    }
}
