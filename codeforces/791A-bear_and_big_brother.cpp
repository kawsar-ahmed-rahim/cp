#include <iostream>
using namespace std;

int main() {
    int n, k,count=0;
    cin >> n >> k;

    while(true){  
        count++;
        n*=3;
        k*=2;
        if(n>k){
            break;
        }
    }
    cout << count << endl;  
    return 0;
}