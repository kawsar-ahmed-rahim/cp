#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
  int t,a,b;
  cin >> t;

  while(t--){
    cin >> a >> b;
    if(a<b){
        cout << a << " " << b << endl;
    }else if(a==b){
                cout << a << " " << b << endl;

    }
    else {
        cout << b << " " << a << endl;

    }

  }
    return 0;
}
