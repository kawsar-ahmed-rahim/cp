
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    int mn = min(a,b);
    int mx = max(a,b);

    int n = ((mx-mn)/2);

    cout << mn << " " << n << endl;


    return 0;
}
