#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int s = 0;
    int d = 0;

    int left = 0;
    int right = n - 1;

    for(int i = 0; i < n; i++) {

        if(i % 2 == 0) {
           
            if(arr[left] > arr[right]) {
                s = s + arr[left];
                left++;
            }
            else {
                s = s + arr[right];
                right--;
            }
        }
        else {
           
            if(arr[left] > arr[right]) {
                d = d + arr[left];
                left++;
            }
            else {
                d = d + arr[right];
                right--;
            }
        }
    }

    cout << s << " " << d << endl;

    return 0;
}