#include <iostream>
#include <vector>
#include <iomanip>
using std::cout, std::cin, std::endl, std::vector;
typedef vector<vector<double>> Matrica;

Matrica KreirajMatricu (int brojRedova, int brojKolona) {
    auto m = Matrica(brojRedova, vector<double>(brojKolona));
    if (brojRedova != brojKolona) throw::std::overflow_error("Greška! Matrica mora biti formata n x n.");
    return m;
}

Matrica UnesiMatricu (int brojRedova, int brojKolona) {
    auto m = KreirajMatricu(brojRedova, brojKolona);
    for (int i = 0; i < brojRedova; i++) {
        for (int j = 0; j < brojKolona; j++) {
            cout << "Unesi element [" << i + 1 << ", " << j + 1 << "]: ";
            cin >> m.at(i).at(j);
        }
        cout << endl;
    }
    return m;
}

void ispisiMatricu (Matrica m) {
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[0].size(); j++) {
            cout << std::setw(5) << m.at(i).at(j);
        }
        cout << endl;
    }
}

Matrica pomnoziMatricu (Matrica m1, Matrica m2) {
    auto m3 = KreirajMatricu(m1.size(), m2[0].size());
    for (int i = 0; i < m1.size(); i++) {
        for (int j = 0; j < m2[0].size(); j++) {
            double suma = 0;
            for (int k = 0; k < m2.size(); k++) {
                suma += m1.at(i).at(k) * m2.at(k).at(j);
            }
            m3.at(i).at(j) = suma;
        }
    }
    return m3;
}

int main() {

    int brKolona1, brRedova1;
    cout << "Unesite dimenzije matrice M1: ";
    cin >> brKolona1 >> brRedova1;
    cout << "Unesite elemente matrice M1: \n";
    auto m1 = UnesiMatricu(brKolona1, brRedova1);

    int brKolona2, brRedova2;
    cout << "Unesite dimenzije matrice M2: ";
    cin >> brKolona2 >> brRedova2;
    cout << "Unesite elemente matrice M2:\n";
    auto m2 = UnesiMatricu(brKolona2, brRedova2);

    cout << "Matrica M1:\n";
    ispisiMatricu(m1);

    cout << "Matrica M2:\n";
    ispisiMatricu(m2);

    auto pomnozeneMatrica = pomnoziMatricu(m1, m2);
    cout << "Pomnozene matrice:\n";
    ispisiMatricu(pomnozeneMatrica);

    return 0;


}