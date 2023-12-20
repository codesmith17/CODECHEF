#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{

    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, i;
        cin >> a >> b;
        int min1 = INT_MAX;
        int k = gcd(a, b);
        cout << lcm(a, k) - gcd(a, k) << endl;
    }

    return 0;
}