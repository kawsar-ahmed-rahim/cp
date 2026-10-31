#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    cin >> n;

    string target = "codeforces";

    for (int i = 0; i < n; i++) {

        string word;
        cin >> word;

        int count = 0;

        for (int j = 0; j < 10; j++) {
            if (word[j] != target[j]) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}