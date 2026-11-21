#include <bits/stdc++.h>
using namespace std;

int main() {
   int a,b,x,count=0;
   cin >> a>> b;

   for(int i=0; i<a; i++){
    cin >> x;
    if(x+b<=5){
    count++;
   }

   }
   
    cout << (count/3) << endl;
    return 0;
}