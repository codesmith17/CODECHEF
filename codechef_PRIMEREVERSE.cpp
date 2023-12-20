#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        string s, p;
        cin >> s >> p;
        int zeros = 0, ones = 0;

        for (int i = 0; i < n; i++)
        {
            if (p[i] == '0')
            {
                zeros++;
            }
            if (s[i] == '0')
            {
                ones++;
            }
        }
        if (zeros != ones)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}