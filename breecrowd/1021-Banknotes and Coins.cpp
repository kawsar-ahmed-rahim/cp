#include <iostream>
using namespace std;

int main() {

    double r;
    cin >> r;

    // Convert to cents
    int n = r * 100 + 0.5;

    int note100, note50, note20, note10, note5, note2;
    int coin1, coin050, coin025, coin010, coin005, coin001;

    // Notes
    note100 = n / 10000;
    n %= 10000;

    note50 = n / 5000;
    n %= 5000;

    note20 = n / 2000;
    n %= 2000;

    note10 = n / 1000;
    n %= 1000;

    note5 = n / 500;
    n %= 500;

    note2 = n / 200;
    n %= 200;

    // Coins
    coin1 = n / 100;
    n %= 100;

    coin050 = n / 50;
    n %= 50;

    coin025 = n / 25;
    n %= 25;

    coin010 = n / 10;
    n %= 10;

    coin005 = n / 5;
    n %= 5;

    coin001 = n;

    cout << "NOTAS:" << endl;
    cout << note100 << " nota(s) de R$ 100.00" << endl;
    cout << note50 << " nota(s) de R$ 50.00" << endl;
    cout << note20 << " nota(s) de R$ 20.00" << endl;
    cout << note10 << " nota(s) de R$ 10.00" << endl;
    cout << note5 << " nota(s) de R$ 5.00" << endl;
    cout << note2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << coin1 << " moeda(s) de R$ 1.00" << endl;
    cout << coin050 << " moeda(s) de R$ 0.50" << endl;
    cout << coin025 << " moeda(s) de R$ 0.25" << endl;
    cout << coin010 << " moeda(s) de R$ 0.10" << endl;
    cout << coin005 << " moeda(s) de R$ 0.05" << endl;
    cout << coin001 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}