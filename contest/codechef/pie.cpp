#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        int mn = a[0] + a[1];

        for (int i = 0; i < n - 1; i++) {
            if (a[i] + a[i + 1] < mn) {
                mn = a[i] + a[i + 1];
            }
        }

        cout << sum - mn / 2 << endl;
    }

    return 0;
}