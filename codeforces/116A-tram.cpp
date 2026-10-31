#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 0;   
    int maxPeople = 0;  

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        current = current - a + b;       
        maxPeople = max(maxPeople, current); 
    }

    cout << maxPeople << endl;

    return 0;
}