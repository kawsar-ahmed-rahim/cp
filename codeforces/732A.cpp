#include <bits/stdc++.h>
using namespace std;

int main() {
    int v,c;
    cin >> v >> c;
    for(int i=1; ; i++){
        if((i*v)%10==0 || (i*v-c)%10==0){
            cout << i << endl;
            break;
        }
    }

    return 0;
}