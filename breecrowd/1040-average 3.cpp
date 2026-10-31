#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double a, b, c, d, e;

    cin >> a >> b >> c >> d;

    double media = (a * 2 + b * 3 + c * 4 + d) / 10.0;

    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;

    if (media >= 7.0) {
        cout << "Aluno aprovado." << endl;
    }
    else if (media < 5.0) {
        cout << "Aluno reprovado." << endl;
    }
    else {

        cout << "Aluno em exame." << endl;

        cin >> e;

        cout << "Nota do exame: " << e << endl;

        double finalMedia = (media + e) / 2.0;

        if (finalMedia >= 5.0)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;

        cout << "Media final: " << finalMedia << endl;
    }

    return 0;
}