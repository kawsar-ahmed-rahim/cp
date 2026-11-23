#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    int n,t;

    string str;
    cin >> t;
    

  while(t--){
      cin >> n;

    cin >> str;

    
    unordered_set<char> unique_chars(str.begin(), str.end());
    int w = unique_chars.size();
    
    cout << (w+n) << "\n";
  }
    return 0;
}
