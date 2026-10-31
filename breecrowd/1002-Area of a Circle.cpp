#include <iostream>
using namespace std;
 #include <iomanip>

int main(){
    double x;
    cin >> x; 
    cout << fixed << setprecision(4);

    cout << "A=" << 3.14159*x*x << endl;
 
    return 0;
}