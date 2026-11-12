
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, x[100], y[100];
    cin >> t;

    while(t--) {
        int sum1 = 0, sum2 = 0, sum3 = 0;

        cin >> a >> b;

        for(int i = 0; i < a; i++) {
            cin >> x[i];
            sum1 += x[i];
        }

        for(int i = 0; i < a; i++) {
            cin >> y[i];
            sum2 += y[i];
        }

        for(int i = 0; i < a; i++) {
            sum3 += min(x[i], y[i]);
        }

        int ans = min({sum1 + b, sum2 + b, sum3 + 2*b});

        cout << ans << endl;
    }

    return 0;
}
