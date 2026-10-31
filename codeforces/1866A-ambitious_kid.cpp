#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n, a;
    cin >> n;

    int ans = INT_MAX;

    for(int i = 0; i < n; i++) {
        cin >> a;

        ans = min(ans, abs(a));
    }

    cout << ans << endl;

    return 0;
}