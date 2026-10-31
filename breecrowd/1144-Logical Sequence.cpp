#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        int sq = i * i;
        int cube = i * i * i;

        cout << i << " " << sq << " " << cube << endl;
        cout << i << " " << sq + 1 << " " << cube + 1 << endl;
    }

    return 0;
}