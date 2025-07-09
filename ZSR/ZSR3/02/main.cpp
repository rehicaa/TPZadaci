#include <iostream>
#include <vector>
#include <iomanip>
#include <limits.h>

using std::cout, std::cin, std::endl, std::vector;

typedef vector<vector<double>> Matrica;

Matrica kreirajMatricu (int brojRedovaKolona) {
    auto m = Matrica (brojRedovaKolona, vector<double>(brojRedovaKolona));
    return m;
}

Matrica UnesiMatricu (int brojRedovaKolona) {
    auto m = kreirajMatricu(brojRedovaKolona);
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[0].size(); j++) {
            cout << "Unesi element [" << i + 1 << ", " << j + 1 << "]: ";
            cin >> m.at(i).at(j);
        }
        cout << endl;
    }
    return m;
}

int redniBrojKoloneSaNajvecomSumom (Matrica m) {
    int redniBroj = 0;
    double najvecaSuma = 0;
    for (int i = 0; i < m[0].size(); i++) {
        double trenutnaSuma = 0;
        for(int j = 0; j < m.size(); j++) {
           trenutnaSuma += m.at(j).at(i);
        }
        if (trenutnaSuma > najvecaSuma) {
            najvecaSuma = trenutnaSuma;
            redniBroj = i+1;
        }
    }
    return redniBroj;
}

int redniBrojRedaSaNajmanjomSumom (Matrica m) {
    int redniBroj = 0;
    double najmanjaSuma = INT_MAX;
    for (int i = 0; i < m.size(); i++) {
        double trenutnaSuma = 0;
        for (int j = 0; j < m[0].size(); j++) {
            trenutnaSuma += m.at(i).at(j);
        }
        if (trenutnaSuma < najmanjaSuma) {
            najmanjaSuma = trenutnaSuma;
            redniBroj = i+1;
        }
    }
    return redniBroj;
}

double sumaCifaraPoDijagonaliMatrice (Matrica m) {
    double suma = 0;
    for (int i = 0; i < m.size(); i++) {
        suma += m.at(i).at(i);
    }
    return suma;
}

void ispisiMatricu (Matrica m) {
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[0].size(); j++) {
            cout << std::setw(5) << m.at(i).at(j);
        }
        cout << endl;
    }
}

int main() {
    cout << "Unesite parametar: ";
    int n;
    cin >> n;

    cout << "Unesite elemente matrice:\n";
    auto m = UnesiMatricu(n);

    cout << "Vasa matrica:\n";
    ispisiMatricu(m);

    cout << "REZULTATI:" << endl;
    cout << "Redni broj kolone sa najvecom sumom je: " << redniBrojKoloneSaNajvecomSumom(m) << endl;
    cout << "Redni broj reda sa najmanjom sumom je: " << redniBrojRedaSaNajmanjomSumom(m) << endl;
    cout << "Zbir cifara po dijagonali je: " << sumaCifaraPoDijagonaliMatrice(m);
}