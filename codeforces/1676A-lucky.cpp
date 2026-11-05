#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
 
int main() {
    int n;
    string s;

    cin >> n;
    while(n--){
        int sum1=0,sum2=0;
        cin >> s;
        for(int i=0;i<3;i++){
            sum1+=s[i]-'0';
        }
         for(int i=3;i<6;i++){
            sum2+=s[i]-'0';
        }
        if(sum1==sum2){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }

    }
 
   
 
    return 0;
}