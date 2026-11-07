
#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int r[105];
    int sum = 0, mx = 0, mn = 101;

    for(int i = 0; i < n; i++) {
        cin >> r[i];

        sum += r[i];
        mx = max(mx, r[i]);
        mn = min(mn, r[i]);
    }

    int R = 0;

    if(n == 2) {
        if(r[0] == r[1]) {
            R = r[0];
        }
    }
    else if(sum >= 2 * mx) {
        R = min(mn, (sum - 2 * mx) / (n - 2));
    }

    priority_queue<pair<int, int>> pq;

    for(int i = 0; i < n; i++) {
        if(r[i] > R) {
            pq.push({r[i] - R, i});
        }
    }

    vector<string> ans;

    while(pq.size() >= 2) {
        auto x = pq.top();
        pq.pop();

        auto y = pq.top();
        pq.pop();

        string s(n, '0');
        s[x.second] = '1';
        s[y.second] = '1';

        ans.push_back(s);

        x.first--;
        y.first--;

        if(x.first > 0) pq.push(x);
        if(y.first > 0) pq.push(y);
    }

    if(!pq.empty()) {
        auto x = pq.top();

        int j = (x.second == 0) ? 1 : 0;

        while(x.first > 0) {
            string s(n, '0');

            s[x.second] = '1';
            s[j] = '1';

            ans.push_back(s);
            x.first--;
        }
    }

    cout << R << endl;
    cout << ans.size() << endl;

    for(string s : ans) {
        cout << s << endl;
    }

    return 0;
}
