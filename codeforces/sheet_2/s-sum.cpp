
#include <iostream>
using namespace std;

int main() {
    int a, b, t;
    cin >> t;

    while(t--) {

       cin >> a >> b;

        int sum = 0;

        if(a > b) {
            swap(a, b);
        }

        for(int i = a+1; i < b; i++) {
            if(i%2!=0){
                sum += i;
            }
            
        }

        cout << sum << endl;
    }

    return 0;
}
