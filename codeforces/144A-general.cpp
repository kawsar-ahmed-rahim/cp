
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

   
    int max_v = 0,min_v=110;
    int maxi=0,mini=0;
    for(int i=1; i<=n;i++){
        int a;
        cin >> a;
        if(a>max_v){
            maxi=i;
            max_v=a;
        }
        if(a<=min_v){
            mini=i;
            min_v=a;
        }
    }
    if(maxi>mini){
        cout << (maxi-1)+(n-mini)-1 << endl;
    }else{
        cout << (maxi-1)+(n-mini) << endl;
    }

   

    return 0;
}
