
#include <iostream>
using namespace std;

int main() {
    int t, n, a[10];

    cin >> t;

    while (t--) {
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mn = a[0];

        for (int i = 1; i < n; i++) {
            if (a[i] < mn) {
                mn = a[i];
            }
        }

        int res = 1;

        for (int i = 0; i < n; i++) {
            if (a[i] == mn) {
                a[i]++;
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            res *= a[i];
        }

        cout << res << endl;
    }

    return 0;
}
