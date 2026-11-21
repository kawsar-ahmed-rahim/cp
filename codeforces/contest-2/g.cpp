#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;

    while(t--) {
        cin >> n >> k;

        if(k > n * (n + 1) / 2) {
            cout << -1 << endl;
            continue;
        }

        for(int i = n; i >= 1; i--) {
            if(k >= i) {
                cout << i << " ";
                k -= i;
            }
        }

        cout << endl;
    }

    return 0;
}