#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double x;
    int count = 0;
    double sum = 0;

    for(int i = 0; i < 6; i++) {
        cin >> x;

        if(x > 0) {
            count++;
            sum += x;
        }
    }

    double n = sum / count;

    cout << fixed << setprecision(1);

    cout << count << " valores positivos" << endl;
    cout << n << endl;

    return 0;
}