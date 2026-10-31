#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, c, d, sum = 0;

    cin >> a >> b >> c >> d;

    string str;
    cin >> str;

    for (char ch : str) {
        if (ch == '1') {
            sum = sum + a;
        }
        else if (ch == '2') {
            sum = sum + b;
        }
        else if (ch == '3') {
            sum = sum + c;
        }
        else {
            sum = sum + d;
        }
    }

    cout << sum << endl;

    return 0;
}