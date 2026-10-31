#include <iostream>
using namespace std;

int main() {
    int m, n;

    while (cin >> m >> n) {

        if (m == n) {
            break;
        }

        if (m > n) {
            cout << "Decrescente" << endl;
        } else {
            cout << "Crescente" << endl;
        }
    }

    return 0;
}