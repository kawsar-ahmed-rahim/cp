
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int mx = max({a, b, c});
        int need = (mx - a) + (mx - b) + (mx - c);
        int rem = n - need;

        if (rem >= 0 && rem % 3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
