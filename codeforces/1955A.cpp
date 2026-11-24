#include <iostream>
using namespace std;

int main() {
    int t,a,b,c;
    cin >> t;

    while(t--){
        cin >> a >> b >> c;
        int aa = a/2;
        int bb = a%2;
        
        int r1 = (aa*c+bb*b);
        int r2 = b*a;

        int mn = min(r1,r2);
        cout << mn << endl;


    }

    return 0;
}