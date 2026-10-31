#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int w, n;
    int coe = 0, rat = 0, sap = 0, total = 0;
    char x;

    cin >> w;

    for(int i = 0; i < w; i++) {
        cin >> n >> x;

        total += n;

        if(x == 'C') {
            coe += n;
        }
        else if(x == 'R') {
            rat += n;
        }
        else if(x == 'S') {
            sap += n;
        }
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coe << endl;
    cout << "Total de ratos: " << rat << endl;
    cout << "Total de sapos: " << sap << endl;

    cout << fixed << setprecision(2);

    cout << "Percentual de coelhos: " 
         << (coe * 100.0) / total << " %" << endl;

    cout << "Percentual de ratos: " 
         << (rat * 100.0) / total << " %" << endl;

    cout << "Percentual de sapos: " 
         << (sap * 100.0) / total << " %" << endl;

    return 0;
}