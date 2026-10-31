#include <iostream>
using namespace std;

int main() {
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;

    string x;

    cin >> x >> d1;
    cin >> h1 >> x >> m1 >> x >> s1;

    cin >> x >> d2;
    cin >> h2 >> x >> m2 >> x >> s2;

    int start = s1 + m1 * 60 + h1 * 3600 + d1 * 86400;
    int endd  = s2 + m2 * 60 + h2 * 3600 + d2 * 86400;

    int diff = endd - start;

    int days = diff / 86400;
    diff %= 86400;

    int hours = diff / 3600;
    diff %= 3600;

    int minutes = diff / 60;
    diff %= 60;

    int seconds = diff;

    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}