#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n,s;
    cin >> n;


    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s<3){
            cout << 0 << endl;
        }
        else {
            cout << (s-1)/2 << endl;

        }
    }

    return 0;
}