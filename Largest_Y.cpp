
#include <bits/stdc++.h>
using namespace std;
void decToBinary(int n)
{

    int binaryNum[32];

    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;

    int base = 1;

    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin >> t;
    while (t--)
    {
        int stop = 1;

        long long int n, x;
        cin >> n >> x;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
            cin >> a[i];
        long long int ans = 0;
        for (long long int i = 0; i < 100; i++)
        {
            long long int m = 0;
            for (long long int j = 0; j < n; j++)
                m = m | (1 << ((a[j] >> i) & 1));
            if (m != 3)
                continue;
            stop = binaryToDecimal(stop);
            long long int k = x;
            if (k & (1 << i))
            {
                k = k ^ (1 << i);
                for (int j = i - 1; j >= 0; j--)
                    k = k | (j * 2);
            }
            ans = max(ans, k);
        }
        cout << ans << endl;
    }
}
