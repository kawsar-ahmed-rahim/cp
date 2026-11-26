
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        bool odd = false, even = false;

        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> x;

            if (x % 2 == 0) {
                even = true;
            } else {
                odd = true;
            }
        }

        if (odd && even) {
            cout << "YES" << endl;
        }
        else if (odd && n % 2 == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
