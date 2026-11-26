#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long n,mx=INT_MIN,sum=0,res,mxx=INT_MIN;
	    cin >> n;
	    long long a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        sum+=a[i];
	        if(a[i]>mx){
	            mx=a[i];
	        }
	        
	    }
	    for(int i=0;i<n;i++){
            res = sum + a[i] - max(mx, 2LL * a[i]);
	        if(res>mxx){
	            mxx = res;
	            
	        }
	    }
	    cout << mxx << endl;
	    
	    
	}
	return 0;

}
