
#include <iostream>
#include <string>
using namespace std;

int main() {
   int n,a,b,m=0,c=0;
   cin >> n;
   while(n--){
    cin >> a >> b;
    if(a>b){
        m++;
    }else if(b>a){
        c++;
    }

   }
   if(m>c){
    cout << "Mishka" << endl;
   }else if(c>m){
    cout << "Chris" << endl;
   }else {
    cout << "Friendship is magic!^^" << endl;
   }

    return 0;
}
