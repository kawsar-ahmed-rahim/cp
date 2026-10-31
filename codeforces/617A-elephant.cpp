#include <iostream>
using namespace std;

int main() {
    int s,res;
    cin >> s;
    res = s/5;
    if(s%5 !=0){
        res+=1;
    }

    cout << res << endl;

    return 0;
}