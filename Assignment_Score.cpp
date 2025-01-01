#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        double required = (n + 1) * 100 / 2;
        double sum = 0;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sum += a;
        }

        double diff = required - sum;
        if (diff > 100) {
            cout << -1 << endl;
        } else if (diff <= 0) {
            cout << 0 << endl;
        } else {
            cout << diff << endl;
        }
    }
    return 0;
}
