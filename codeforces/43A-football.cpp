
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string a, b, s;
    int countA = 0, countB = 0;

    cin >> a;
    countA++;

    for (int i = 1; i < n; i++) {
        cin >> s;

        if (s == a) {
            countA++;
        }
        else {
            b = s;
            countB++;
        }
    }

    if (countA > countB) {
        cout << a << endl;
    }
    else {
        cout << b << endl;
    }

    return 0;
}
