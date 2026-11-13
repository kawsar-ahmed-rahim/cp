
#include <iostream>
using namespace std;

int main() {
   int n,b,c;
   cin >> n;

   b = n/100;
   c = n%100;

   b += c/20;
   c = c%20;

   b += c/10;
   c = c%10;

   b += c/5;
   c = c%5;

   b += c/1;
   c = c%1;

   cout << b << endl;


    return 0;
}
