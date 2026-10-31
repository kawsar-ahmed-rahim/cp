#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int tm = 240 - k;
    int solved = 0;

    for (int i = 1; i <= n; i++) {
        int time = 5 * i;

        if (tm >= time) {
            tm -= time;
            solved++;
        } else {
            break;
        }
    }

    cout << solved;

    return 0;
}