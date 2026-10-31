#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int l;
        cin >> l;

        int count = 0;
        int negative = 0;

        for(int j = 0; j < l; j++) {
            int a;
            cin >> a;

            if(a == 0) {
                count++;
            }

            if(a == -1) {
                negative++;
            }
        }

        if(negative % 2 != 0) {
            count += 2;
        }

        cout << count << endl;
    }

    return 0;
}