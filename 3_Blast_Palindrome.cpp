#include <iostream>
#include <map>
/*(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧*/
#include <algorithm>
#include <numeric>
#include <set>
#include <cmath>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;
#define pb push_back
string rs()
{
    string a;
    cin >> a;
    return a;
}
int ri()
{
    int a;
    cin >> a;
    return a;
}
long long rll()
{
    long long a;
    cin >> a;
    return a;
}
int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = ri();
    while (t--)
    {
        int n = ri();
        string s = rs();

        if (n % 3 == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        bool flag = false;
        for (char ch = 97; ch <= 122; ch++)
        {
            int a = n + 1, b = -1;
            for (int i = 0; i < n; i++)
            {
                if (i % 3 == 0 && s[i] == ch)
                {
                    a = i;
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                int x = n - 1 - i;
                if (x % 3 == 0 && s[i] == ch)
                {
                    b = i;
                    break;
                }
            }

            if (a < b)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}