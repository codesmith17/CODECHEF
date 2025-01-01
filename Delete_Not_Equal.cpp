#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zeroCount = count(s.begin(), s.end(), '0');
        int oneCount = n - zeroCount;
        if (zeroCount == 0 or oneCount == 0)
            cout << n << "\n";
        else
            cout << 1 << "\n";
    }
}