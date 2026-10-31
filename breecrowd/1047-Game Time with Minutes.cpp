#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int start = a * 60 + b;
    int end = c * 60 + d;

    int duration = end - start;

    if (duration <= 0) {
        duration += 24 * 60;
    }

    int hour = duration / 60;
    int minute = duration % 60;

    cout << "O JOGO DUROU "
         << hour << " HORA(S) E "
         << minute << " MINUTO(S)" << endl;

    return 0;
}