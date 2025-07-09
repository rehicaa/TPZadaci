#include <iostream>
#include <vector>
#include <iomanip>
#include <stdexcept>

using std::cout, std::cin, std::endl, std::vector;
typedef vector<vector<bool>> boolMatrica;

boolMatrica kreirajMatricu (int brojRedovaKolona) {
    auto m = boolMatrica(brojRedovaKolona, vector<bool>(brojRedovaKolona));
    return m;
}

boolMatrica unesiMatricu (int brojRedovaKolona) {
    auto m = kreirajMatricu(brojRedovaKolona);
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[0].size(); j++) {
            cout << "Unesite element [" << i + 1 << ", " << j + 1 << "]: ";
            bool tempVrijednost = false;
            cin >> tempVrijednost;
            while (!cin) {
                cout << "Netacan unos! Molimo unesite 0 ili 1.\n";
                cin.ignore(10000, '\n');
                cin.clear();
                cin >> tempVrijednost;
            }
            m.at(i).at(j) = tempVrijednost;
        }
    }
    return m;
}

bool provjeriTranzitivnostMatrice (boolMatrica m) {
    int brojRedovaKvadrateMatrice = m.size();

    for (int i = 0; i < brojRedovaKvadrateMatrice; i++) {
        if (brojRedovaKvadrateMatrice != m.at(i).size()) {
            throw std::domain_error("Parametar nije kvadratna matrica.");
        }
    }
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m.size(); j++) {
            for (int k = 0; k < m.size(); k++) {
                if (m.at(i).at(j) && m.at(j).at(k)) {
                    if (!m.at(i).at(k)) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

void ispisiMatricu (boolMatrica m) {
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[0].size(); j++) {
            cout << std::setw(5) << m.at(i).at(j);
        }
        cout << endl;
    }
}

int main() {
    try {
    cout << "Unesite parametar: ";
    int n;
    cin >> n;

    auto m = unesiMatricu(n);
    cout << "Vasa matrica:\n";
    ispisiMatricu(m);

    if (provjeriTranzitivnostMatrice(m)) {
        cout << "Matrica je tranzitivna.";
    } else cout << "Matrica nije tranzitivna.";
}
    catch (std::domain_error& e) {
        cout << "GRESKA: " << e.what();
    }

    catch (...) {
        cout << "Desila se nepoznata greska.";
    }

    return 0;
}