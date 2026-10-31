#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int number, hours;
    double amountPerHour;

    cin >> number >> hours >> amountPerHour;

    double salary = hours * amountPerHour;

    cout << "NUMBER = " << number << endl;

    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salary << endl;

    return 0;
}