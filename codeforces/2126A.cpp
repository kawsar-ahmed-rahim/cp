#include <iostream>

using namespace std;

int main() {
  int t,n;
  cin >> t;

  while(t--)
  {
    int mn = 9;

     cin >> n;
   while(n>0){
    
    int d = n%10;
   
   
    if(d<mn){
        mn = d;

    }
     n = n/10;
    
   }
   cout << mn << endl;



  }
    return 0;
}
