#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int x;
        long long a = 0;
        long long c = 0;
        cin >> x;
        int arr[x];

        for (int j = 0; j < x; j++)
        {
            cin >> arr[j];
            if (arr[j] == 1)
                c++;
            else
            {
                a = a + (c * (c + 1) / 2);
                c = 0;
            }
        }
        a = a + (c * (c + 1) / 2);
        cout << a << endl;
    }

    return 0;
}