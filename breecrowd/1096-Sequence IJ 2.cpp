#include <iostream>
 using namespace std;
 
int main() {
   for(int k=1;k<=9;k=k+2){
      for(int i=k,j=7;j>=5;j=j-1){ 
        cout << "I=" << i << " " << "J=" << j << endl;
    }
       
   }
    return 0;
}