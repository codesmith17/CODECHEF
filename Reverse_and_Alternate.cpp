#include <bits/stdc++.h>
using namespace std;

bool func(string &S, int N, char start) {
    string T;
    for (int i = 0; i < N; i++) {
        if (i & 1) {
            T.push_back(start == '0' ? '1' : '0');
        } else
            T.push_back(start);
    }

    int s = -1, e = -1;

    for (int i = 0; i < N; i++) {
        if (S[i] != T[i]) {
            if (s == -1)
                s = i;
            e = i;
        }
    }

    if (s == -1) {
        return true;
    }

    reverse(T.begin() + s, T.begin() + e + 1);

    return S == T;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        if (func(S, N, '0') or func(S, N, '1')) {
            cout << "Yes"
                 << "\n";
        } else {
            cout << "No"
                 << "\n";
        }
    }

    return 0;
}
