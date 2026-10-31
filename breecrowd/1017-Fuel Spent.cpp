#include <iostream>
#include<iomanip>
 using namespace std;
 
int main() {
    int a,b;
    cin >> a >> b;
    double res = a*b / 12.0;
    cout << fixed << setprecision(3) << res << endl;
 
 
    return 0;
}