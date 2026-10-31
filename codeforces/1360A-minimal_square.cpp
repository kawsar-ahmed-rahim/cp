#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;

        int small = min(a, b);
        int large = max(a, b);

        int side = max(2 * small, large);

        cout << side * side << endl;
    }

    return 0;
}