
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        string str;
        cin >> n >> str;

        int first = 0, last = 0;

        for(int i = 0; i < n; i++) {
            if(str[i] == 'B') {
                first = i;
                break;
            }
        }

        for(int j = n - 1; j >= 0; j--) {
            if(str[j] == 'B') {
                last = j;
                break;
            }
        }

        cout << (last - first + 1) << endl;
    }

    return 0;
}
