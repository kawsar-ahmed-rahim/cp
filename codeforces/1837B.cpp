
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, n;
    string s;

    cin >> t;

    while (t--) {
        cin >> n >> s;

        int count = 1, mx = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                count = 1;
            }

            if (count > mx) {
                mx = count;
            }
        }

        cout << mx + 1 << endl;
    }

    return 0;
}
