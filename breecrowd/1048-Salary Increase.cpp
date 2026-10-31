#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float x;
    cin >> x;

    int percent;

    if (x >= 0 && x <= 400.00)
        percent = 15;

    else if (x <= 800.00)
        percent = 12;

    else if (x <= 1200.00)
        percent = 10;

    else if (x <= 2000.00)
        percent = 7;

    else
        percent = 4;

    float increase = x * percent / 100.0;
    float newSalary = x + increase;

    cout << fixed << setprecision(2);

    cout << "Novo salario: " << newSalary << endl;
    cout << "Reajuste ganho: " << increase << endl;
    cout << "Em percentual: " << percent << " %" << endl;

    return 0;
}