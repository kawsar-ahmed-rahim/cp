#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n*4;i=i+4){
        for(int j=i;j<i+3;j++){
            cout << j << " ";
        }
        cout << "PUM" << endl;
    }

    return 0;
}
