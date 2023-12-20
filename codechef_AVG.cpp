#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, v;
        cin >> n >> k >> v;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        int f = (v * (n + k) - sum);
        int s = f / k;
        if (s > 0 && f % k == 0)
            cout << s << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
