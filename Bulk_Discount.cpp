#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        int reduce = 1;
        long long sum = arr[0];
        for (int i = 1; i < n; i++) {
            sum += max(0, arr[i] - (reduce++));
        }
        cout << sum << "\n";
    }
}