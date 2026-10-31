#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long ans = (a % 100) * (b % 100) * (c % 100) * (d % 100);

    cout << ans % 100 << endl;

    return 0;
}