
#include <iostream>
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
        cin >> n;
        int oks = 0;
        while (n != 50)
        {
            if (n > 50)
            {
                n -= 3;
                oks++;
            }
            else
            {
                n += 2;
                oks++;
            }
        }
        cout << oks << endl;
    }

    return 0;
}
