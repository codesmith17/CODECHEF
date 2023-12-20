#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int target, overs;
        cin >> target >> overs;
        int arr[overs] = {0};
        if (overs > 0)
        {
            for (int i = 0; i < overs; i++)
            {
                cin >> arr[i];
            }
            int sum = 0;
            for (int i = 0; i < overs; i++)
                sum += arr[i];
            int oversleft = 20 - overs;
            int remaining = target - sum;
            float k = (remaining) * (1.0) / (oversleft) * (1.0);
            if (k < 10)
                cout << "MI" << endl;
            else
                cout << "CSK" << endl;
        }
        else
        {
            if ((target * 1.0) / (20 * 1.0) < 10)
                cout << "MI" << endl;
            else
                cout << "CSK" << endl;
        }
    }
    return 0;
}