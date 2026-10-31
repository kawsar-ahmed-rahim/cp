#include <iostream>
#include <vector>

using namespace std;

void printPrime(int n) {
    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";

            for (int j = i * 2; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    printPrime(n);

    return 0;
}