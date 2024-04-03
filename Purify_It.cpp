#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to compute prime factorization of a number
vector<int> primeFactorization(int n)
{
    vector<int> factors;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        factors.push_back(n);
    }
    return factors;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int L, R;
        cin >> L >> R;

        vector<long long> dp(R + 1, 0); // Initialize dp array

        for (int i = 1; i <= R; i++)
        {
            int max_multiple = R / i * i;     // Find the largest multiple of i smaller than or equal to R
            dp[i] = dp[i - 1] + max_multiple; // Update dp[i] with sum of purification costs up to max_multiple
        }

        long long total_cost = dp[R] - dp[L - 1]; // Compute total cost for the range [L, R]
        cout << total_cost << endl;
    }

    return 0;
}
