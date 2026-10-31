#include <iostream>

using namespace std;

int main() {

    int x, i;
    cin >> x;

    for(int n = 1; n <= x; n++) {

        cin >> i;

        if(i < 0 && i % 2 != 0) {
            cout << "ODD NEGATIVE" << endl;
        }
        else if(i == 0) {
            cout << "NULL" << endl;
        }
        else if(i < 0 && i % 2 == 0) {
            cout << "EVEN NEGATIVE" << endl;
        }
        else if(i > 0 && i % 2 != 0) {
            cout << "ODD POSITIVE" << endl;
        }
        else if(i > 0 && i % 2 == 0) {
            cout << "EVEN POSITIVE" << endl;
        }
    }

    return 0;
}