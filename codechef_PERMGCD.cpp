#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << n - 1 << " ";
        if (n <= 4)
            for (int i = 1; i <= n - 2; i++)
                cout << i << " ";
        else
        {
            cout << n - 2 << " ";
            for (int i = 1; i <= n - 4; i++)
                cout << i << " ";
            cout << n - 3 << " ";
        }
        cout << n << endl;
    }
    return 0;
}