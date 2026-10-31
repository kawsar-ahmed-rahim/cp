#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[2], mx = 0;

    for (int i = 0; i < 2; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    int x = 6 - mx + 1;
    int y = 6;

    if (x <= 0) {
        cout << "0/1" << endl;
    }
    else {
        int g = gcd(x, y);
        cout << x / g << "/" << y / g << endl;
    }

    return 0;
}