#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
  int t,n;
  cin >> t;

  while(t--)
  {
    cin >> n;
    int res = n/4;
    int rem  = n%4;
    int res2 = rem/2;

    cout << (res+res2) << endl;

  }
    return 0;
}
