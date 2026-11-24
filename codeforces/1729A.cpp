#include <iostream>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;

    while (t--) {
        cin >> a >> b >> c;

        int x = a - 1;
        int y = abs(b - c) + (c - 1);

        if (x < y) {
            cout << 1 << endl;
        }
        else if (x > y) {
            cout << 2 << endl;
        }
        else {
            cout << 3 << endl;
        }
    }

    return 0;
}