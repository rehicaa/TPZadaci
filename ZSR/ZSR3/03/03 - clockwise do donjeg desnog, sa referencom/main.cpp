#include <vector>
#include <iomanip>
#include <iostream>
using std::cout, std::cin, std::endl, std::vector, std::setw;
typedef vector<vector<int>> Matrica;

Matrica kreirajMatricu (int n) {
    return Matrica(n, vector<int>(n));
}

void spiralizujMatricu (Matrica& m) {
    int brojac = 1;
    int n = m.size();

    int desnaGranica = n - 1;
    int gornjaGranica = 0;
    int lijevaGranica = 0;
    int donjaGranica = n - 1;

    while (gornjaGranica <= donjaGranica && lijevaGranica <= desnaGranica) {
        for (int i = desnaGranica; i >= lijevaGranica; i--) {
            m.at(donjaGranica).at(i) = brojac++;
        }
        donjaGranica--;

        if (lijevaGranica <= desnaGranica) {
            for (int i = donjaGranica; i >= gornjaGranica; i--) {
                m.at(i).at(lijevaGranica) = brojac++;
            }
        }
        lijevaGranica++;

        if (gornjaGranica <= donjaGranica) {
            for (int i = lijevaGranica; i <= desnaGranica; i++) {
                m.at(gornjaGranica).at(i) = brojac++;
            }
        }
        gornjaGranica++;

        if (lijevaGranica <= desnaGranica) {
            for (int i = gornjaGranica; i <= donjaGranica; i++) {
                m.at(i).at(desnaGranica) = brojac++;
            }
        }
        desnaGranica--;
    }

}

void ispisiMatricu (Matrica& m) {
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m.size(); j++) {
            cout << setw(5) << m.at(i).at(j);
        }
        cout << endl;
    }
}


int main() {
    cout << "Unesite parametar za matricu: ";
    int n;
    cin >> n;

    auto m = kreirajMatricu(n);
    spiralizujMatricu(m);
    cout << "Vasa spiralizovana matrica:\n";
    ispisiMatricu(m);
}