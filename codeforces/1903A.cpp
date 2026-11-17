
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int arrLen, subArrLen;
        cin >> arrLen >> subArrLen;

        vector<int> arr(arrLen);

        bool isSorted = true;

        for (int i = 0; i < arrLen; i++) {
            cin >> arr[i];

            if (i > 0 && arr[i] < arr[i - 1]) {
                isSorted = false;
            }
        }

        if (isSorted || subArrLen >= 2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
