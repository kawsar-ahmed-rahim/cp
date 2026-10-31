#include <iostream>
using namespace std;

int main() {

    int x, mx = 0, pos;

    for(int i = 1; i <= 100; i++) {
        cin >> x;

        if(x > mx) {
            mx = x;
            pos = i;
        }
    }

    cout << mx << endl;
    cout << pos << endl;

    return 0;
}