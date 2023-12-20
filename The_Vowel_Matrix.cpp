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

int32_t main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        long long int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        long long int ans = 1;
        long long int subwords = 0;
        bool oks = false;
        long long int subwordcounter = 0;
        bool oks1 = false;

        for (long long int i = 0; i < n; i++)
        {
            if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
            {
                if (!oks)
                {
                    if (oks1)
                    {
                        subwordcounter++;
                        ans = (ans * subwordcounter) % 1000000007;
                    }
                }
                subwords++;
                oks = true;
                oks1 = true;
                subwordcounter = 0;
            }
            else
            {
                if (!oks)
                {
                    subwordcounter++;
                }
            }
            if (subwords == k)
            {
                oks = false;
                subwords = 0;
            }
        }

        cout << ans << endl;
    }
    return 0;
}