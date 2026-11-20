#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mx = 0;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        int cnt = 0;

        while(x % 2 == 0) {
            cnt++;
            x /= 2;
        }

        mx = max(mx, cnt);
    }

    cout << mx << endl;

    return 0;
}