
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s1, s2;
        cin >> s1 >> s2;

        int freq[26] = {0};

        for (int i = 0; i < n; i++) {
            freq[s1[i] - 'a']++;
        }

        for (int i = 0; i < m; i++) {
            freq[s2[i] - 'a']--;
        }

        bool flag = true;

        for (int i = 0; i < 26; i++) {
            if (freq[i] < 0) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
