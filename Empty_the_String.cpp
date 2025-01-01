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
        int a = 0, b = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A')
                a++;
            else
                b++;
            if (s[i] == 'A') {
                if (b > 0)
                    b--;

            } else {
                if (a > 0)
                    a--;
            }
        }
        cout << a + b << endl;
    }
}