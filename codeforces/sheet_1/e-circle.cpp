#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    float f;
    cin >> f;

    double ans = 3.141592653*(f*f);
    cout << fixed << setprecision(9) << ans << endl;
    return 0;
}