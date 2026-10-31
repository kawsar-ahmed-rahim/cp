#include <iostream>
using namespace std;

int main() {

    int m,n;
    for(int i=1; i<=3; i++){
        cin >> m >> n;
         
    int sum = 0;
    for(int i=n; i<=m; i++){
       
        cout << i << " ";
                sum+=i;

    }
        cout << "Sum=" << sum << endl;

        
    }

    

    return 0;
}