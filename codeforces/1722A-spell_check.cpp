#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, a;
    string str;
    cin >> t;

    while(t--) {
        cin >> a >> str;

        string original = "Timur";

        sort(str.begin(), str.end());
        sort(original.begin(), original.end());

        if(a == 5 && str == original) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}