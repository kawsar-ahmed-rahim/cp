#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,c;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a >> b >> c;

        int ans = c+a-b;
        if(ans==0){
            cout << c << endl;
            break;
        }
        cout << ans << endl;
    }
	
	return 0;

}
