#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long a = 0, b = 1;
    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << " ";
        cout << a;
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << "\n";
    return 0;
}