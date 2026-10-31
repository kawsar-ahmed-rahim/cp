#include <iostream>
#include<iomanip>
 using namespace std;
 
int main() {
    int p1,u1,p2,u2;
    float pr1,pr2;
    cin >> p1 >> u1 >> pr1;
    cin >> p2 >> u2 >> pr2;
    double res = (u1*pr1+u2*pr2);
    
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << res << endl;

    
 
 
    return 0;
}