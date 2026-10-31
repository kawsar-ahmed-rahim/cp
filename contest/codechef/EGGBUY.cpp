#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,f,res1,res2;
	cin >> x >> y >> f ;
	res1 = x*12;
	res2 = y*12+f;
	if(res1>res2){
	    cout << res2 << endl;
	    
	}else {
	    cout << res1 << endl;
	    
	}
	
	return 0;

}
