#include <iostream>
using namespace std;

int main() {
    int n,h,a,count=0;
    cin >> n >> h;
    
    for(int i=0; i<n;i++){
        cin >> a;
        if(a>h){
            count++;
        }
    }
    cout << count+n << endl;

    return 0;
}