#include <algorithm>
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

Matrica zamijeniMinMaxRedoveUnutarMatrice(Matrica& m) {
    double minSuma = std::numeric_limits<double>::max();
    double maxSuma = std::numeric_limits<double>::min();


    int indexMax = 0;
    int indexMin = 0;

    for (int i = 0; i < m.size(); i++) {
        double trenutnaSuma = 0;
        for (int j = 0; j < m[0].size(); j++) {
            trenutnaSuma += m.at(i).at(j);
        }
        if (trenutnaSuma >= maxSuma) {
            maxSuma = trenutnaSuma;
            indexMax = i;
        }
        if (trenutnaSuma <= minSuma) {
            minSuma = trenutnaSuma;
            indexMin = i;
        }
    }

    for (int i = 0; i < m[0].size(); i++) {
        double privremenaVarijabla = m.at(indexMin).at(i);
        m.at(indexMin).at(i) = m.at(indexMax).at(i);
        m.at(indexMax).at(i) = privremenaVarijabla;
    }

    return m;
}

int main() {
    cout << "Unesite broj redova i kolona matrice: ";
    int brR, brK;
    cin >> brR >> brK;

    auto m = unesiMatricu(brR, brK);
    cout << "Vasa matrica:\n";
    ispisiMatricu(m);

    zamijeniMinMaxRedoveUnutarMatrice(m);

    cout << "Vasa matrica nakon izvrsenja funckije:\n";
    ispisiMatricu(m);

    return 0;
}