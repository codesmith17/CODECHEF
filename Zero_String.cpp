#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long int zeros = 0, ones = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ones++;
            }
            else
            {
               zeros++;
            }
        }
        cout << min(zeros + 1, ones) << endl;
    }

    return 0;
}