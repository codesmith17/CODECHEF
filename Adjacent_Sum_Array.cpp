#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n - 1);
        for (int &it : arr)
            cin >> it;
        sort(arr.rbegin(), arr.rend());
        vector<int> res(n);
        res[n - 1] = 1;
        int current = 1;
        for (int i = n - 2; i >= 0; i--) {
            res[i] = arr[i] - res[i + 1];
        }
        for (int &it : res)
            cout << it << " ";
        cout << endl;
    }
}