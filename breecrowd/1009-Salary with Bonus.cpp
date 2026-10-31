#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
 
int main() {
    string name;
    double sal,dis;
    cin >> name >> sal >> dis;
    double res = sal+(dis*15/100);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << res << endl;
    return 0;
}