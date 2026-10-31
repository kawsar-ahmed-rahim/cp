#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int x, i;
    cin >> x;
    double a,b,c;
    
    
    for(int i=1; i<=x;i++){
        cin >> a >> b >>c;
        double res = (a*2 + b*3 + c*5)/10.0;
        cout << fixed << setprecision(1);
        cout << res << endl;
        
    }
    
    
    return 0;
}