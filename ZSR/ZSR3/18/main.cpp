#include <iostream>
#include <vector>
#include <iomanip>

using std::cout, std::cin, std::endl, std::vector;
typedef vector<vector<int>> Matrica;

Matrica kreirajMatricu (int n) {
    return Matrica (n, vector<int>(n));
}

Matrica unesiMatricu (int& n) {
    auto m = kreirajMatricu(n);
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
            cout << std::setw(5) << m.at(i).at(j);
        }
        cout << endl;
    }
    cout << endl;
}

bool daLiJeMatricaSavrseniKvadrat (Matrica& m) {

    int magicnaSuma = 0;

    int brojRedova = m.size();
    int brojKolona = m[0].size();

    bool daLiSuKoloneIRedoviJednakiMagicnomBroju = false;
    bool daLiJeDijagonala1JednakaMagicnomBroju = false;
    bool daLiJeDijagonala2JednakaMagicnomBroju = false;

    vector<bool> vidjeniBrojevi ((m.size() * m.size() + 1), false);

    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[0].size(); j++) {
            int trenutniBroj = m.at(i).at(j);
            if (trenutniBroj < 1 || trenutniBroj > (m.size()*m.size())) return false;

            if (vidjeniBrojevi.at(trenutniBroj)) return false;

            vidjeniBrojevi.at(trenutniBroj) = true;
        }
    }

    for (int i = 0; i < brojRedova; i++) {
        for (int j = 0; j < brojKolona; j++) {
            magicnaSuma += m.at(i).at(j);
        }
    }

    double magicniBroj = magicnaSuma / m.size();

    for (int i = 0; i  < brojRedova; i++) {

        int sumaReda = 0;
        int sumaKolone = 0;

        for (int j = 0; j < brojKolona; j++) {
            sumaReda += m.at(i).at(j);
            sumaKolone += m.at(j).at(i);
        }

        if ((sumaReda == magicniBroj) && (sumaKolone == magicniBroj)) {
            daLiSuKoloneIRedoviJednakiMagicnomBroju = true;
        } else return false;

    }

    int sumaDijagonale1 = 0;
    int sumaDijagonale2 = 0;

    for (int i = 0; i < m.size(); i++) {
        sumaDijagonale1 += m.at(i).at(m.size() - 1 - i);
    }

    for (int i = m.size() - 1; i >= 0; i--) {
        sumaDijagonale2 += m.at(i).at(i);
    }

    if (sumaDijagonale1 == magicniBroj) daLiJeDijagonala1JednakaMagicnomBroju = true;
    if (sumaDijagonale2 == magicniBroj) daLiJeDijagonala2JednakaMagicnomBroju = true;

    bool dijagonaleSuJednakeMagicnomBroju = false;

    if (daLiJeDijagonala1JednakaMagicnomBroju && daLiJeDijagonala2JednakaMagicnomBroju) {
        dijagonaleSuJednakeMagicnomBroju = true;
    }

return (daLiSuKoloneIRedoviJednakiMagicnomBroju && dijagonaleSuJednakeMagicnomBroju);

}

int main() {
    cout  << "Unesite parametar kvadratne matrice: ";
    int n;
    cin >> n;

    auto m= unesiMatricu(n);
    cout << "Vasa matrica:\n";
    ispisiMatricu(m);

    if (daLiJeMatricaSavrseniKvadrat(m)) {
        cout << "Matrica je savrseni magicni kvadrat.";
    } else cout << "Matrica nije savrseni magicni kvadrat.";

    return 0;
}