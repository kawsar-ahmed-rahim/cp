#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    int ans1  = a%10;
    int ans2 = b%10;
    cout << ans1+ans2 << endl;

    return 0;
}