#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string word;
    cin >> word;

    int capitalCount = 0;
    int smallCount = 0;

    for (char letter : word) {
        if (isupper(letter)) {
            capitalCount++;
        } 
        else if (islower(letter)) {
            smallCount++;
        }
    }

    if (capitalCount > smallCount) {

        for (char &letter : word) {
            letter = toupper(letter);
        }

    } else {

        for (char &letter : word) {
            letter = tolower(letter);
        }
    }

    cout << word << endl;

    return 0;
}