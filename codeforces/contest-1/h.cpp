#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long product = a * b;

    if (product % c != 0) {
        cout << "double" << endl;
    }
    else if (product / c <= INT_MAX) {
        cout << "int" << endl;
    }
    else if (product / c <= LLONG_MAX) {
        cout << "long long" << endl;
    }
    else {
        cout << "double" << endl;
    }

    return 0;
}