
#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int n,mn=INT_MAX,a,pos,i;
    cin >> n;
    for( i=1;i<=n;i++){
        cin >> a;
        if(a<mn){
            mn = a;
            pos = i;

        }
       
    

    } 
    cout << mn << " " << pos << endl;
    

    return 0;
}
