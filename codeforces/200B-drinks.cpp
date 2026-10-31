#include <iostream>
#include<iomanip>

using namespace std;

int main() {
    int k,a,sum=0;
    cin >> k;

    for(int i=0;i<k;i++){
        cin >> a;
        sum +=a;
    }
    cout << fixed << setprecision(12) << (double)sum/k << endl;
    

    return 0;
}