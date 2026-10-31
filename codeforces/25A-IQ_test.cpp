
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    int even = 0, odd = 0;
    int evenPos, oddPos;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> x;

        if (x % 2 == 0) {
            even++;
            evenPos = i;
        } else {
            odd++;
            oddPos = i;
        }
    }

    if (even == 1) {
        cout << evenPos << endl;
    } else {
        cout << oddPos << endl;
    }

    return 0;
}
