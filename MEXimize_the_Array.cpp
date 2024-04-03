#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        long long int N, ans = 0;

        cin >> N;
        vector<long long int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        sort(A.begin(), A.end());
        for (int i = 0; i < N; i++)
        {
            ans += abs(i - A[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
