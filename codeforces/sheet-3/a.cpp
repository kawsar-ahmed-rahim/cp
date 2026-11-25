
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n,a,sum=0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a;
    sum+=a;
  }
  cout << abs(sum) << endl;

    return 0;
}
