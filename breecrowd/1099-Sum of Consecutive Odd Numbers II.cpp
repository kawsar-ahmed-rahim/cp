#include <iostream>
using namespace std;

int main() {

    int n, x, y;

    cin >> n;

    for (int i = 1; i <= n; i++) {

        cin >> x >> y;

        int sum = 0;

        int start = min(x, y);
        int end = max(x, y);

        for (int j = start + 1; j < end; j++) {

            if (j % 2 != 0) {
                sum += j;
            }
        }

        cout << sum << endl;
    }

    return 0;
}