#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int sum2 = 0;

    for (int i = 1; i <= n; i++) {
        int x = i;
        int sum = 0;

        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }

        if (sum >= a && sum <= b) {
            sum2 += i;
        }
    }

    cout << sum2 << endl;

    return 0;
}