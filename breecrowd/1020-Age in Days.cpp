#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int years = n / 365;
    n %= 365;

    int months = n / 30;
    int days = n % 30;

    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;

    return 0;
}