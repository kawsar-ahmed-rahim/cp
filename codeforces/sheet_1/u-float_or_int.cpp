#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;

    int integerPart = (int)n;

    if (n == integerPart) {
        cout << "int " << integerPart << endl;
    } else {
        cout << "float " << integerPart << " " << n - integerPart << endl;
    }

    return 0;
}