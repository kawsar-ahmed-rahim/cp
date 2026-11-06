#include <iostream>
using namespace std;

int main() {
    int t, k;
    cin >> t;

    while(t--) {
        cin >> k;

        int count = 0;

        for(int i = 1; ; i++) {
            if(i % 3 != 0 && i % 10 != 3) {
                count++;
            }

            if(count == k) {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}