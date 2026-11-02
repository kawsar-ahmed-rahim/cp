#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >>c;
    int m = max(max(a,b),c);
    int n = min(min(a,b),c);

    cout << m-n << endl;

    

    return 0;
}