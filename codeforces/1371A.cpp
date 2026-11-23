#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
   int n,t;
   cin >> t;
   while(t--){
    cin >> n;
     if(n==1){
    cout << 1 << endl;
   }else if(n%2==0){
    cout << (n/2) << endl;
   }else if(n%2!=0){
    cout << ((n/2)+1) << endl;
   }
   }
  
    return 0;
}
