#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    int t;
    cin >> t;
    while (t--) {
     cin >> s;
      for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
     if(s == "yes") {
        cout << "YES" << endl;
     }else {
        cout << "NO" << endl;
     }
    }
    return 0;
}