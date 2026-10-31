#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    bool seen[26] = {false};
    for (char c : s) {
        seen[tolower(c) - 'a'] = true;
    }

    for (int i = 0; i < 26; i++) {
        if (!seen[i]) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}