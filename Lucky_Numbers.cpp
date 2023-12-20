#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '7')
            {
                cout << "YES" << endl;
                k = 1;
                break;
            }
        }
        if (k == 0)
            cout << "NO" << endl;
    }

    return 0;
}