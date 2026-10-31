#include <iostream>

using namespace std;

int main() {

    double x;
    int count = 0;

    for(int i = 0; i < 6; i++) {
        cin >> x;

        if(x > 0) {
            count++;
        }
    }

    cout << count << " valores positivos" << endl;

    return 0;
}