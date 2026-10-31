#include <iostream>

using namespace std;

int main() {

    int x;
    int count = 0,count2=0,ev=0,od=0;

    for(int i = 1; i <= 5; i++) {
        cin >> x;

      
        if(x < 0) {
            count2++;
        }
         if(x > 0) {
            count++;
        }
        if(x % 2 == 0) {
            ev++;
        }
         if(x % 2 != 0) {
            od++;
        }
    }
    cout << ev << " valor(es) par(es)" << endl;
    cout << od << " valor(es) impar(es)" << endl;

    cout << count << " valor(es) positivo(s)" << endl;
    cout << count2 << " valor(es) negativo(s)" << endl;

    return 0;
}