#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int mini = 1e9;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                mini = min(mini, abs(2 * (i + j) - k));
            }
        }
        cout << mini << "\n";
    }
}