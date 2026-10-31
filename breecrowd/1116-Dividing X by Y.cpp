#include <iostream>
using namespace std;
#include <iomanip>
int main() {
    int m,a,b;
    cin >> m;

   for(int i=1;i<=m;i++){
       cin >> a >> b;
       if(b==0){
           cout << "divisao impossivel" << endl;
           continue;
       }
       
       double res = (double)a /(double)b;
       cout << fixed << setprecision(1);
       cout << res << endl;
   }

       
    
    

    return 0;
}