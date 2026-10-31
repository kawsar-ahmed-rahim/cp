#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    cin >> x;

    int maximum = x;

    for (int i = 2; i <= n; i++) {
        cin >> x;

        if (x > maximum) {
            maximum = x;
        }
    }

    cout << maximum << endl;

    return 0;
}