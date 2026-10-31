#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long b = (n + a - 1) / a;
    long long c = (m + a - 1) / a;

    cout << b * c << endl;
    return 0;
}