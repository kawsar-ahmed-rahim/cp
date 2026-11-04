#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int odd = 0;

            for (int j = i; j < n; j++) {
                if (arr[j] % 2 != 0) {
                    odd++;
                }

                if (odd % 2 == 0) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}