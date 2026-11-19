#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long x, y;

    if (a <= b && a <= c) {
        x = a;
    }
    else if (b <= a && b <= c) {
        x = b;
    }
    else {
        x = c;
    }

    a -= x;
    c -= x;

    if (a / 2 <= c) {
        y = a / 2;
    }
    else {
        y = c;
    }

    cout << x + y << endl;

    return 0;
}