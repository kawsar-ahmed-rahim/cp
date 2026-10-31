#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    bool prime = true;

    if (x <= 1) {
        prime = false;
    }

    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}