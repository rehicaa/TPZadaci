#include <complex>
#include <iostream>
#include <vector>
#include <iomanip>
#include <stdexcept>
#include <limits>

using std::cout, std::cin, std::endl, std::vector,
std::domain_error, std::complex, std::setw,
std::setprecision, std::fixed;

typedef vector<vector<double>> Matrica;

Matrica kreirajMatricu (int brojRedova, int brojKolona) {
    return Matrica(brojRedova, vector<double>(brojKolona));
}

Matrica unesiMatricu (int brojRedova, int brojKolona) {
    auto m = kreirajMatricu(brojRedova, brojKolona);
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[0].size(); j++) {
            cout << "Unesite element [" << i + 1 << ", " << j + 1 << "]: ";
            cin >> m.at(i).at(j);
        }
        cout << endl;
    }
    return m;
}

void ispisiMatricu (Matrica& m) {
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[0].size(); j++) {
            cout << setw(5) << m.at(i).at(j);
        }
        cout <<endl;
    }
}

complex<double> zamijeniMinMaxKolonuIVratiKompleksneKaoRezultat(Matrica& m) {
    double zimg = 2;
    double zre = 2;

    complex<double>rezultat(zre, zimg);
    double najmanjaSuma = std::numeric_limits<double>::max();
    double najvecaSuma = 0;
    double trenutnaSumaNajmanja = 0;
    double trenutnaSumaNajveca = 0;

    for (int i = 0; i < m[0].size(); i++) {
        for (int j = 0; j < m.size(); i++) {
            trenutnaSumaNajveca += m.at(j).at(i);
            trenutnaSumaNajmanja += m.at(j).at(i);
            if (trenutnaSumaNajmanja <= najmanjaSuma) najmanjaSuma = trenutnaSumaNajmanja;
            if (trenutnaSumaNajveca >= najvecaSuma) najvecaSuma = trenutnaSumaNajveca;
        }
    }

    cout << "najmanja(debug):" << trenutnaSumaNajmanja << endl;
    cout << "najveca(debug):" << trenutnaSumaNajveca << endl;

    return rezultat;
}

int main () {
    cout << "Unesi granice matrice respektivno: ";
    int brR, brK;
    cin >> brR >> brK;

    auto m = unesiMatricu(brR, brK);

    cout << zamijeniMinMaxKolonuIVratiKompleksneKaoRezultat(m);
}