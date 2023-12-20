#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int v1, b1, e1, v2, b2, e2, v3, b3, e3;
    cin >> n >> v1 >> b1 >> e1 >> v2 >> b2 >> e2 >> e3 >> b3 >> e3;
    int min1 = min(v1, min(b1, e1));
    int min2 = min(v2, min(b2, e2));
    int min3 = min(v3, min(b3, e3));
    int arr[] = {min1, min2, min3};
    sort(arr, arr + 3);
    int count = 0;
    if (arr[0] <= n)
        count++;
    if (arr[1] + arr[0] <= n)
        count++;
    if (arr[0] + arr[1] + arr[2] <= n)
        count++;
    cout << count << endl;
    return 0;
}