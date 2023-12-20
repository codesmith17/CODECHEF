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
        int n;
        cin >> n;
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];
        int count1 = 0, count2 = 0, maxc1 = 0, maxc2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] > 0)
                count1++;
            else
                count1 = 0;
            maxc1 = max(maxc1, count1);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr2[i] > 0)
                count2++;
            else
                count2 = 0;
            maxc2 = max(maxc2, count2);
        }
        
        if (maxc1 > maxc2)
            cout << "Om" << endl;
        else if (maxc2 > maxc1)
            cout << "Addy" << endl;
        else
            cout << "Draw" << endl;
    }
    return 0;
}