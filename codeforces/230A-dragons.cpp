#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<pair<int,int>> dragons(b);
    for (auto &p : dragons) cin >> p.first >> p.second;

    sort(dragons.begin(), dragons.end());

    bool flag = true;
    for (auto &p : dragons) {
        if (a > p.first) {
            a += p.second;
        } else {
            flag = false;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}