#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        int cost = 0;
        cost = cost + k * x;
        int r = n - k;
        if (r * x >= r * y) {
            cost = cost + r * y;
        }
        if (r * y > r * x) {
            cost = cost + r * x;
        }

        cout << cost << endl;
    }

    return 0;
}