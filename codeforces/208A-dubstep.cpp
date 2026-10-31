
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";

    for (int i = 0; i < s.length(); i++) {

        if (s.substr(i, 3) == "WUB") {
            i += 2;

            if (ans != "" && i + 1 < s.length()) {
                ans += " ";
            }
        }
        else {
            ans += s[i];
        }
    }

    cout << ans << endl;

    return 0;
}
