#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,c;
    cin >> t;
    while (t--) {
       cin >> a >> b >> c;
        if (c - a == 2 && b - a == 1) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}