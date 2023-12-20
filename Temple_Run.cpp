#include <bits/stdc++.h>
using namespace std;
// long long int findGCD(long long int a, long long int b)
// {
//     if (b == 0)
//         return a;
//     return findGCD(b, a % b);
// }

// void lowestFraction(long long int num1, long long int num2)
// {
//     long long int denom;
//     denom = findGCD(num1, num2);
//     num1 /= denom;
//     num2 /= denom;

//     num = num1;
//     den = num2;
// }
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long int num = 1, den = 1;
        int k;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            num = num * 2;
            num = num % 1000000007;
        }
        for (int i = 0; i < k; i++)
        {
            den = den * 2;
            den = den % 1000000007;
        }

        cout << (num - 1) % 1000000007 << " " << den % 1000000007 << endl;
    }
    return 0;
}