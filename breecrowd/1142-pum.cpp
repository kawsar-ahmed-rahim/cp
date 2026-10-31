#include <iostream>
using namespace std;

int main() {

    int x;
    cin >> x;

    int n = 1;

    for(int i = 1; i <= x; i++) {

        cout << n << " ";
        cout << n + 1 << " ";
        cout << n + 2 << " ";
        cout << "PUM" << endl;

        n += 4;
    }

    return 0;
}