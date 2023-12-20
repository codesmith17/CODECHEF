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
        int n;
        string s;
        cin >> n >> s;

        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                count++;
        }
        int count1 = n - count;
        count1 = min(count1, count);
        if (count1 % 2 == 0)
        {
            cout << "Ramos" << endl;
        }
        else
        {
            cout << "Zlatan" << endl;
        }
    }
    return 0;
}