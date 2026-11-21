#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a, b, c;

    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;

        if (t == 1) {
            a.push_back(i);
        }
        else if (t == 2) {
            b.push_back(i);
        }
        else {
            c.push_back(i);
        }
    }

    int w = min(a.size(), min(b.size(), c.size()));

    cout << w << endl;

    for (int i = 0; i < w; i++) {
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }

    return 0;
}