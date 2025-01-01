#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &it : arr)
            cin >> it;
        vector<int> result(n);

        int lastGreatest = n - 1;
        result[n - 1] = lastGreatest;

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= arr[lastGreatest]) {
                lastGreatest = i;
            }
            result[i] = lastGreatest;
        }
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, result[i] - i);
        }
        cout << maxi << endl;
    }
}