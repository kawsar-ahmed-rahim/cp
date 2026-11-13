
#include <iostream>
using namespace std;

int main() {
    long long k, s;
    cin >> k >> s;

    long long ans = 0;

    for (long long x = 0; x <= k; x++) {
        long long low = max(0LL, s - x - k);
        long long high = min(k, s - x);

        if (low <= high) {
            ans += high - low + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
