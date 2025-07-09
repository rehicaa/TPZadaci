#include <iostream>
#include <vector>
#include <iomanip>
using std::cout, std::cin, std::endl, std::vector;
typedef vector<vector<double>> Matrica;

Matrica KreirajMatricu (int broj_redova, int broj_kolona) {
    return Matrica(broj_redova, vector<double>(broj_kolona));
}

int brojRedovaMatrice (Matrica m) {
    return m.size();
}

int brojKolonaMatrice (Matrica m) {
    return m[0].size();
}

void ispisiMatricu (Matrica m) {
    for (int i = 0; i < brojRedovaMatrice(m); i++) {
        for (int j = 0; j < brojKolonaMatrice(m); j++) {
            cout << std::setw(5) << m.at(i).at(j);
        }
        cout << endl;
    }
}

Matrica UnesiMatricu (int brojRedova, int brojKolona) {
    auto m = KreirajMatricu(brojRedova, brojKolona);
    for (int i = 0; i < brojRedova; i++) {
        for (int j = 0; j < brojKolona; j++) {
            cout << "Unesi element [" <<  i + 1 << ", " << j + 1 << "]: ";
            cin >> m.at(i).at(j);
        }
    }
    return m;
}

Matrica saberiMatrice (Matrica m1, Matrica m2) {
    Matrica m3 = KreirajMatricu(brojRedovaMatrice(m1), brojKolonaMatrice(m2));
    for (int i = 0; i < brojRedovaMatrice(m1); i++) {
        for (int j = 0; j < brojKolonaMatrice(m1); j++) {
            m3.at(i).at(j) = m1.at(i).at(j) + m2.at(i).at(j);
        }
    }
    return m3;
}

bool provjeriMogucnostMnozenjaMatrica (Matrica m1, Matrica m2) {
    if (brojKolonaMatrice(m1) == brojRedovaMatrice(m2)) {
        return true;
    }

    return false;
}

Matrica pomnoziMatrice (Matrica m1, Matrica m2) {
    auto m3 = KreirajMatricu(brojRedovaMatrice(m1), brojKolonaMatrice(m2));
    for (int i = 0; i < brojRedovaMatrice(m1); i++) {
        for (int j = 0; j < brojKolonaMatrice(m2); j++) {
            double suma = 0;
            for (int k = 0; k < brojRedovaMatrice(m2); k++) {
                suma += m1.at(i).at(k) * m2.at(k).at(j);
            }
            m3.at(i).at(j) = suma;
        }
    }
    return m3;
}

int main() {
    int m1, n1;
    cout << "Unesite dimenzije matrice M1: ";
    cin >> m1 >> n1;
    cout << "Unesite elemente matrice M1:\n";
    auto M1 = UnesiMatricu(m1, n1);

    int m2, n2;
    cout << "Unesite dimenzije matrice M2: ";
    cin >> m2 >> n2;
    cout << "Unesite elemente matrice M2:\n";
    auto M2 = UnesiMatricu(m2, n2);

    cout << "Matrica M1:\n";
    ispisiMatricu(M1);

    cout << "Matrica M2:\n";
    ispisiMatricu(M2);

    auto M3 = pomnoziMatrice(M1, M2);
    cout << "Pomnozene matrice M1XM2:\n";
    ispisiMatricu(M3);

    auto M4 = saberiMatrice(M1, M2);
    cout << "Sabrane matrice M1 i M2:\n";
    ispisiMatricu(M4);

    return 0;
}
