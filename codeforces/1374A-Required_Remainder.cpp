#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;
        long long q = (n - y) / x;
        long long ans = q * x + y;
        cout << ans << "\n";
    }
    return 0;
}