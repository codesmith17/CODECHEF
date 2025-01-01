#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k <= 1) {
            cout << -1 << "\n";
            continue;
        }

        vector<int> perm(n);
        bool flag = true;
        for (int shift = 0; shift < n; shift++) {
            for (int i = 0; i < n; i++)
                perm[i] = ((i + k) % n) + shift;
            int cnt = 0;
            for (int i = 0; i < n; i++)
                if (perm[i] % k == i)
                    continue;
                else
                    cnt++;
            if (cnt == n) {
                flag = true;
                break;
            }
        }
        if (flag) {
            for (int i = 0; i < n; i++)
                cout << perm[i] << " ";
            cout << "\n";
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}