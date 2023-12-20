#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>
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
        int a, b;
        cin >> a >> b;
        long long int count = 1;
        for (int i = 0; i < a; i++)
        {
            if (i < b)
            {
                count = (count * (b - i)) % 1000000007;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}