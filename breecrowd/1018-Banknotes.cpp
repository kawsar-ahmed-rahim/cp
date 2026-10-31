#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    cout << x << endl;

    int notes;

    notes = x / 100;
    cout << notes << " nota(s) de R$ 100,00" << endl;
    x = x % 100;

    notes = x / 50;
    cout << notes << " nota(s) de R$ 50,00" << endl;
    x = x % 50;

    notes = x / 20;
    cout << notes << " nota(s) de R$ 20,00" << endl;
    x = x % 20;

    notes = x / 10;
    cout << notes << " nota(s) de R$ 10,00" << endl;
    x = x % 10;

    notes = x / 5;
    cout << notes << " nota(s) de R$ 5,00" << endl;
    x = x % 5;

    notes = x / 2;
    cout << notes << " nota(s) de R$ 2,00" << endl;
    x = x % 2;

    notes = x / 1;
    cout << notes << " nota(s) de R$ 1,00" << endl;

    return 0;
}