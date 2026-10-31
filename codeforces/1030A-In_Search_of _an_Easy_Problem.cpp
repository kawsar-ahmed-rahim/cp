#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    bool hasHard = false;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 1){
            hasHard = true;
        }
    }
    
    if(hasHard){
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
    
    return 0;
}