#include <iostream>
using namespace std;
#include <iomanip>
int main() {
    int x,al=0,ga=0,di=0;
    while(true){
        cin >> x;
        if(x<1 || x >4){
            continue;
        }
        if(x==1){
            al+=1;
        }else if(x==2){
            ga+=1;
        } else if(x==3){
            di+=1;
        }else if(x==4) {
            break;
            
        }
        
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << al << endl;
     cout << "Gasolina: " << ga << endl;
      cout << "Diesel: " << di << endl;
   
  
       
    
    

    return 0;
}