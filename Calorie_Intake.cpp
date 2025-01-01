#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, b, c;
    cin >> x >> b >> c;
    if (b * c > x)
        cout << -1 << endl;
    else
        cout << x - b * c << endl;
}