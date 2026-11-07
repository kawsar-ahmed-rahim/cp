#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a[100005], b[100005];
    pair<int, int> p[100005];

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }

    sort(p, p + n);

    for(int i = 0; i < n - 1; i++) {
        if(p[i].second > p[i + 1].second) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;

    return 0;
}