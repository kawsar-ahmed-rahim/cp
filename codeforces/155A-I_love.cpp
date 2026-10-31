#include <iostream>
using namespace std;

int main() {
    int n, x;
    int count = 0;

    cin >> n;

    cin >> x;

    int max = x;
    int min = x;

    for (int i = 1; i < n; i++) {
        cin >> x;

        if (x > max) {
            max = x;
            count++;
        }

        if (x < min) {
            min = x;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}