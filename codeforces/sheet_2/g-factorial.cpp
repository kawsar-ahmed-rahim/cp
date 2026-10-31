#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    

  
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        int ans = 1;
      for(int j=1;j<=x;j++){
         ans = ans * j;
      }
      cout << ans << endl;
    }

    

    return 0;
}