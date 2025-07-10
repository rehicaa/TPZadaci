#include <iostream>
#include <iomanip>
#include <vector>
using std::cout, std::cin, std::vector, std::setw;
typedef vector<vector<int>> Matrica;

Matrica kreirajMatricu (int n) {
    return Matrica(n, vector<int>(n));
}

Matrica spiralizujMatricuCounterclockwise (Matrica m) {
    int brojac = 1;
    int n = m.size();

    int desnaGranica = n - 1;
    int gornjaGranica = 0;
    int lijevaGranica = 0;
    int donjaGranica = n - 1;

    while (gornjaGranica <= donjaGranica && lijevaGranica <= desnaGranica) {
        for (int i = desnaGranica; i >= lijevaGranica; i--) {
            m.at(gornjaGranica).at(i) = brojac++;
        }
        gornjaGranica++;

        for (int i = gornjaGranica; i <= donjaGranica; i++) {
            m.at(i).at(lijevaGranica) = brojac++;
        }

        lijevaGranica++;

        for (int i = lijevaGranica; i <= desnaGranica; i++) {
            m.at(donjaGranica).at(i) = brojac++;
        }

        donjaGranica--;

        for (int i = donjaGranica; i >= gornjaGranica; i--) {
            m.at(i).at(desnaGranica) = brojac++;
        }

        desnaGranica--;
    }
    return m;
}

void ispisiMatricu (Matrica m) {
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m.size(); j++) {
            cout << setw (5) << m.at(i).at(j);
        }
        cout << std::endl;
    }
}

int main() {
    cout << "Unesite parametar kvadratne spiralne matrice: ";
    int n;
    cin >> n;

    auto m = Matrica (n, vector<int>(n));
    m = spiralizujMatricuCounterclockwise(m);

    cout << "Vasa spiralna matrica:\n";

    ispisiMatricu(m);


}