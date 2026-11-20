#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, a, b;
    cin >> t;

    while(t--) {
        cin >> a >> b;

        if(a > b) {
            swap(a, b);
        }

        long long sum = (b - a + 1) * (a + b) / 2;

        cout << sum << endl;
    }

    return 0;
}