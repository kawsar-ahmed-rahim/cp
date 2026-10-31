#include <iostream>
#include <math.h>
#include <iomanip> 
using namespace std;
int main() {
    float a,b,c;
    cin >> a >> b >> c;
    if(a+b>c && b+c>a && c+a>b) {
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << a+b+c << endl;
    } else {
        cout << fixed << setprecision(1);
        cout << "Area = " << 0.5*(a+b)*c << endl;
        
    }
 
     
 
    return 0;
}
    