#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char ch;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> ch;
        if(ch=='c' || ch=='o'|| ch=='d' || ch=='e' || ch=='f' || ch=='r' || ch=='c' || ch=='s'){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}