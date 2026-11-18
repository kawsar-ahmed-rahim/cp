
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,x;
    cin >> a >> b >> c >> x;

    if(a+b-c==x || a+b*c==x || a-b+c==x || a-b*c==x || a*b+c==x || a*b-c==x){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }


    return 0;
}
