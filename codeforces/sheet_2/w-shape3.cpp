#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Top half: rows 1..n
    for (int i = 1; i <= n; i++) {
        cout << string(n - i, ' ') << string(2 * i - 1, '*') << "\n";
    }

    // Bottom half: mirror, rows n..1
    for (int i = n; i >= 1; i--) {
        cout << string(n - i, ' ') << string(2 * i - 1, '*') << "\n";
    }

    return 0;
}