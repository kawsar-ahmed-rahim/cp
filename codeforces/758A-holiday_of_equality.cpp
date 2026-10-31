#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[100], mx = 0, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += mx - a[i];
    }

    cout << sum << endl;

    return 0;
}