#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int n =(a+b+abs(a-b)) /2;
    int x = (c+n+abs(c-n)) / 2;
    cout << x << " eh o maior" << endl;
 
 
    return 0;
}