#include <iostream>
using namespace std;

int main() {
    int n, a;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a;

        int sum = 0;

        while(a > 0) {
            int rem = a % 10;
            sum = sum + rem;
            a = a / 10;
        }

        cout << sum << endl;
    }

    return 0;
}