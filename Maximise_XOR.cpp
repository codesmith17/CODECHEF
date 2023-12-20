#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.length();
        int onesa = 0, onesb = 0;
        for (int i = 0; i < n; i++)
        {
            onesa = onesa + (int)(a[i] - '0');
            onesb = onesb + (int)(b[i] - '0');
        }
        // char checka[n] = {0}, checkb[n] = {0};
        // int pairs = 0;
        // for (int i = 0; i < n && checka[i] != 1; i++)
        // {

        //     for (int j = 0; j < n && checkb[j] != 1; j++)
        //     {

        //         if (a[i] != b[j])
        //         {
        //             pairs++;
        //             checka[i] = 1;
        //             checkb[j] = 1;
        //             break;
        //         }
        //     }
        // }

        int zeroes = abs(n - (onesa + onesb));
        int ones = abs(n - zeroes);
        for (int i = 1; i <= ones; i++)
        {
            cout << "1";
        }
        for (int i = 1; i <= zeroes; i++)
        {
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}
