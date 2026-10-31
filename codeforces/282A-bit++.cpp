#include <iostream>
using namespace std;

int main() {
    string a;
    int n;
    cin >> n;
    int v=0;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a == "X++"){
            v++;
        }else if(a=="++X"){
            ++v;
        }else if(a=="X--"){
            v--;
        }else if(a=="--X"){
            --v;
        }
    }
    cout << v << endl;


    
    return 0;
}