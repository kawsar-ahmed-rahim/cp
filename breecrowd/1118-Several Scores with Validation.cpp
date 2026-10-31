#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double x, sum;
    int count, option;

    while (true) {

        sum = 0;
        count = 0;

        while (count < 2) {

            cin >> x;

            if (x >= 0 && x <= 10) {
                sum += x;
                count++;
            }
            else {
                cout << "nota invalida" << endl;
            }
        }

        cout << fixed << setprecision(2);
        cout << "media = " << sum / 2.0 << endl;

        while (true) {

            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> option;

            if (option == 1 || option == 2) {
                break;
            }
        }

        if (option == 2) {
            break;
        }
    }

    return 0;
}