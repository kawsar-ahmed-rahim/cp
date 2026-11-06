#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    long long x;

    cin >> n;

    while(n--) {
        cin >> x;

        long long root = sqrt(x);

        if(root * root == x) {
            bool prime = true;

            for(int i = 2; i * i <= root; i++) {
                if(root % i == 0) {
                    prime = false;
                    break;
                }
            }

            if(prime && root > 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }

        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}