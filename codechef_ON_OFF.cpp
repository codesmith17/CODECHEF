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
        char ch1[n], ch2[n];
        for (int i = 0; i < n; i++)
            cin >> ch1[i];
        for (int i = 0; i < n; i++)
            cin >> ch2[i];
        int changes = 0;
        for (int i = 0; i < n; i++)
        {
            if (ch1[i] != ch2[i])
                changes++;
        }
        if (changes % 2 != 0)
            cout << "0" << endl;
        else
            cout << "1" << endl;
    }

    return 0;
}