#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n;

    int ans = 0;
    int count = 0;

    for(int i = 1; i <= n; i++) {
        cin >> a;

        if(a > 0) {
            ans += a;
        }
        else {
            if(ans > 0) {
                ans--;
            }
            else {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}