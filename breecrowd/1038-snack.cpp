#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int x, y;
    cin >> x >> y;

    double price;

    if (x == 1) price = 4.00;
    else if (x == 2) price = 4.50;
    else if (x == 3) price = 5.00;
    else if (x == 4) price = 2.00;
    else price = 1.50;

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << price * y << endl;

    return 0;
}