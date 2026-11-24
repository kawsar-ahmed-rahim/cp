#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int x[a];
        bool flag = false;

        for (int i = 0; i < a; i++) {
            cin >> x[i];

            if (x[i] == b) {
                flag = true;
            }
        }

        if (flag == true) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}