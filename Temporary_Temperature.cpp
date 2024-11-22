#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int s = 0, e = 1e5;  
        int res = 1e9;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            int diff = 1;  
            int l = arr[0] - mid, r = arr[0] + mid;  
            bool possible = true;

            for (int i = 1; i < n; i++)
            {
                l = max(l, arr[i] - mid);
                r = min(r, arr[i] + mid);

                if (l > r)
                {
                    diff++;
                    l = arr[i] - mid;
                    r = arr[i] + mid;
                }
            }

            if (diff <= k + 1)
            {
                res = mid; 
                e = mid - 1; 
            }
            else
            {
                s = mid + 1; 
            }
        }

        cout << res << endl;
    }

    return 0;
}
