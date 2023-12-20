#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string str;
        cin >> str;

        if (str.length() > 1)
        {
            int oks = str[str.size() - 1] - '0';
            int notoks = str[str.size() - 2] - '0';
            notoks = notoks % 2;
            cout << notoks * 10 + oks << endl;
        }
        if (str.length() == 1)
        {
            int oks = str[str.size() - 1] - '0';
            cout << oks << endl;
        }
    }
    return 0;
}