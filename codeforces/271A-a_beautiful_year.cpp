#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int n = a + 1;

    while (true) {
        int x = n;

        bool used[10] = {false};
        bool different = true;

        while (x > 0) {
            int digit = x % 10;

            if (used[digit]) {
                different = false;
                break;
            }

            used[digit] = true;
            x = x / 10;
        }

        if (different) {
            cout << n << endl;
            break;
        }

        n++;
    }

    return 0;
}