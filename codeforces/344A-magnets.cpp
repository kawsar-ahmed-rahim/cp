#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, count = 1;      
    cin >> t;              
    string prev, cur;
    cin >> prev;         
    for (int i = 1; i < t; i++) {
        cin >> cur;
        if (cur != prev) { 
            count++;
        }
        prev = cur;
    }
    cout << count << endl;
    return 0;
}