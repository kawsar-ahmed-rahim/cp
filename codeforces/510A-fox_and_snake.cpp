
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = 1; i <= a; i++) {
        if (i % 2 != 0) {
            for (int j = 0; j < b; j++) {
                cout << "#";
            }
            cout << endl;
        }
        else if (i % 4 == 2) {
            for (int k = 1; k < b; k++) {
                cout << ".";
            }
            cout << "#" << endl;
        }
        else {
            cout << "#";
            for (int k = 1; k < b; k++) {
                cout << ".";
            }
            cout << endl;
        }
    }

    return 0;
}
