#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int k = __builtin_popcountll(n);
        cout << (1LL << k) - 1 << "\n";
    }
    return 0;
}