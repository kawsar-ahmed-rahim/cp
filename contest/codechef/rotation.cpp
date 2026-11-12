
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;

    cin >> t;

    while(t--) {
        int count = 0;

        cin >> n >> s;

        for(int i = 0; i < n; i++) {
            int a = s[i] - '0';
            int b = s[(i + 1) % n] - '0';

            int num = a * 10 + b;

            if(num % 4 == 0) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
