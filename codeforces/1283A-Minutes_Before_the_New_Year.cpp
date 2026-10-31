#include <iostream>
using namespace std;

int main() {
    int n,b,a;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;

        int min = 1440-(a*60 + b);
        cout << min << endl;

    }

    return 0;
}