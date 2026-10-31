#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p;
    cin >> p;

    bool level[101] = {false};

    for(int i = 0; i < p; i++) {
        int x;
        cin >> x;
        level[x] = true;
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i++) {
        int y;
        cin >> y;
        level[y] = true;
    }

    for(int i = 1; i <= n; i++) {
        if(level[i] == false) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;

    return 0;
}