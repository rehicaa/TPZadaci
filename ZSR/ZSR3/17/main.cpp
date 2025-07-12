#include <deque>
#include <iostream>
#include <vector>
#include <iomanip>
#include <stdexcept>

using std::cout, std::cin, std::vector, std::endl, std::setw, std::deque;
typedef deque<deque<int>> Matrica;

Matrica kreirajMatricu (int brojRedova, int brojKolona) {
    return Matrica (brojRedova, deque<int>(brojKolona));
}

Matrica unesiMatricu (int brojRedova, int brojKolona) {
    auto m = kreirajMatricu((brojRedova), brojKolona);
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[0].size(); j++) {
            cout << "Unesite element [" << i + 1 << ", " << j + 1 << "]: ";
            cin >> m.at(i).at(j);
        }
        cout << endl;
    }
    return m;
}

bool daLiJeCirkulantna (Matrica& m) {
    if (m.empty()) return true;

    int brojKolona = m[0].size();
    for (int i = 1; i < m.size(); i++) {
        if (m.at(i).size() != brojKolona) {
            return false;
        }
    }

    if (brojKolona != m.size()) {
        return false;
    }

    for (int i = 1; i < m.size(); i++) {
        auto trenutniRed = m.at(i);
        auto prethodniRed = m.at(i-1);

        if (trenutniRed[0] != prethodniRed[m[0].size()-1]) {
            return false;
        }

        for (int j = 1; j < m[0].size(); j++) {
            if (trenutniRed.at(j) != prethodniRed.at(j-1)) {
                return false;
            }
        }

    }

    return true;
}

void ispisiMatricu(Matrica &m) {
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[0].size(); j++) {
            cout << setw(5) << m.at(i).at(j);
        }
        cout << endl;
    }
}


int main() {

    cout << "Unesite parametre kvadratne matrice: ";
    int brR, brK;
    cin >> brR >> brK;

    auto m = unesiMatricu(brR, brK);
    cout << "Vasa matrica:\n";
    ispisiMatricu(m);

    if (daLiJeCirkulantna(m)) {
        cout << "Matrica je cirkulantna.";
    } else cout << "Matrica nije cirkulantna";

    return 0;

}