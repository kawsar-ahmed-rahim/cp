#include <iostream>
#include <math.h>
#include <iomanip> 
using namespace std;
int main() {
 
 int a,b,x;
 cin >> a >> b;
 if(a>b){
     x = (24-a);
    
     cout << "O JOGO DUROU " << x+b << " HORA(S)" << endl;
     
 } else if (a<b) {  
     cout << "O JOGO DUROU " << b-a << " HORA(S)" << endl;

     
 } else {
          cout << "O JOGO DUROU " << "24 " << "HORA(S)" << endl;

 }
    return 0;
}
    
#include <iostream>
using namespace std;

int main() {

    int start, end;
    cin >> start >> end;

    int duration = (end - start + 24) % 24;

    if (duration == 0)
        duration = 24;

    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;

    return 0;
}