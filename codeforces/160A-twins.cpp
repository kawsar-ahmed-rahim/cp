#include <iostream>

#include<algorithm>
using namespace std;

int main() {
    int n,arr[100],mine=0,count=0,total=0;
    cin >> n;
    for(int i=0; i<n;i++){
        cin >> arr[i];
        total+=arr[i];
    }
    sort(arr, arr + n);                       
    for (int i = n - 1; i >= 0; i--) {    
    mine += arr[i];
    count++;
    if (mine > total - mine) break;
}
cout << count << endl;
    return 0;
}