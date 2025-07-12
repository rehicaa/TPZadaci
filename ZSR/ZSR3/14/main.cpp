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
        cout << endl;
    }
}

complex<double> zamijeniMinMaxKolonuIVratiKompleksneKaoRezultat(Matrica& m) {

    double najmanjiProizvod = std::numeric_limits<double>::max();
    double najveciProizvod = std::numeric_limits<double>::min();

    int varijablaZamjeneZaNajmanji = 0;
    int varijablaZamjeneZaNajveci = 0;

    for (int i = 0; i < m[0].size(); i++) {

        double trenutniProizvod = 1;

        for (int j = 0; j < m.size(); j++) {
            trenutniProizvod *= m.at(j).at(i);
        }

        if (trenutniProizvod <= najmanjiProizvod) {
            najmanjiProizvod = trenutniProizvod;
            varijablaZamjeneZaNajmanji = i;
        }
        if (trenutniProizvod >= najveciProizvod) {
            najveciProizvod = trenutniProizvod;
            varijablaZamjeneZaNajveci = i;
        }
    }

    for (int i = 0; i < m.size(); i++) {
        double privremenaVarijabla = m.at(i).at(varijablaZamjeneZaNajmanji);
        m.at(i).at(varijablaZamjeneZaNajmanji) = m.at(i).at(varijablaZamjeneZaNajveci);
        m.at(i).at(varijablaZamjeneZaNajveci) = privremenaVarijabla;
    }

    return {najmanjiProizvod, najveciProizvod};

}

int main () {
    cout << "Unesi granice matrice respektivno: ";
    int brR, brK;
    cin >> brR >> brK;

    auto m = unesiMatricu(brR, brK);

    cout << "Vasa matrica:\n";
    ispisiMatricu(m);

    cout << zamijeniMinMaxKolonuIVratiKompleksneKaoRezultat(m) << endl;

    cout << "Vasa matrica nakon funckije:\n";
    ispisiMatricu(m);
}