#include <iostream>
#include<iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    vector<int> numbers = {a,b,c};

    
    sort(numbers.begin(), numbers.end());

   
    for (int num : numbers) {
        cout << num << endl;
    }
    cout << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}