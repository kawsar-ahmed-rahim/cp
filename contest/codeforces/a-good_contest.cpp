#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,c,x;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x;
        cin >> a >> b >> c;

        int m = min({a, b, c});
        cout << x-m << endl;
    }
	
	return 0;

}
