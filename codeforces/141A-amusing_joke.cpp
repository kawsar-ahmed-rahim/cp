#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
 
int main() {
    
    string s1,s2,s3;
    cin >> s1;
     cin >> s2;
      cin >> s3;

      string s = s1+s2;
      sort(s3.begin(), s3.end());
      sort(s.begin(), s.end());

      if(s==s3){
        cout << "YES" << endl;
      }else {
        cout << "NO" << endl;
      }
 
   
 
    return 0;
}