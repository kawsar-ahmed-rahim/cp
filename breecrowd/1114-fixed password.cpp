#include <stdio.h>
 #include <iostream>
using namespace std;

int main() {
    int m;
    while(cin >> m){
        if(m==2002){
            cout << "Acesso Permitido" << endl;
            break;
        }
        else {
            cout << "Senha Invalida" << endl;
        }
    }

   
    return 0;
}
