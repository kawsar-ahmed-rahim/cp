
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str, st;
    cin >> str >> st;

    reverse(str.begin(), str.end());

    if (str == st) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
