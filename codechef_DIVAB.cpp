#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, j;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, n;
        cin >> a >> b >> n;
        if (a % b == 0)
        {
            cout << "-1" << endl;
            continue;
        }
        j = n;
        if (j % a != 0)
        {
            j = n + (a - (n % a));
        }
        /*int k = (a * b) / gcd(a, b);*/
        while(!(j%a==0 && j%b!=0))
        {
            j+=a;
        }
        cout<<j<<endl;
        

           
    }

    return 0;
}