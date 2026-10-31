#include <iostream>
#include<iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a,c,e;
    string b,d;
    cin >> a >> b >> c >> d >> e;
    int ans;

    if (b=="+"){
        ans = a+c;
        if(ans==e){
            cout << "Yes" << endl;
        }else {
            cout << ans << endl;
        }
    }else if (b=="-"){
        ans = a-c;
        if(ans==e){
            cout << "Yes" << endl;
        }else {
            cout << ans << endl;
        }
    }else if (b=="*"){
        ans = a*c;
        if(ans==e){
            cout << "Yes" << endl;
        }else {
            cout << ans << endl;
        }
    }
    return 0;
}