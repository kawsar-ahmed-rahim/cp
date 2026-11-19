#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a, mn = INT_MAX, count = 0;

    for(int i = 0; i < n; i++) {
        cin >> a;

        mn = min(mn, a);
        count++;

        if(count == k || i == n - 1) {
            cout << mn << " ";
            mn = INT_MAX;
            count = 0;
        }
    }

    return 0;
}