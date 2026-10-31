#include <iostream>
using namespace std;

int main() {
    int t, a, b,c;
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> a >> b >> c;

        if(a == b){
            if(c%2==1){
                cout << "First" << endl;
            }else {
                cout << "Second" << endl;
            }

        }           
        else{
            if(a>b){
                cout << "First" << endl;
            }else {
                 cout << "Second" << endl;
            }
        }
    }

    return 0;
}