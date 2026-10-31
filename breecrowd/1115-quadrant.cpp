#include <stdio.h>
 #include <iostream>
using namespace std;

int main() {
    int m,n;
    while(cin >> m >> n){
        if(m==0 || n==0){
            break;
        }
        if(m>0 && n>0){
            cout << "primeiro" << endl;
        }
        else if(m>0 && n<0){
            cout << "quarto" << endl;
        }
        else if(m<0 && n<0){
            cout << "terceiro" << endl;
        }
        else if(m<0 && n>0){
            cout << "segundo" << endl;
        }
        
    }

   
    return 0;
}
