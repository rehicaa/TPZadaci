#include <iostream>
#include <vector>
#include <iomanip>

using std::cout, std::cin, std::endl, std::vector, std::setw;
typedef vector<vector<int>> Matrica;

Matrica spiralizujMatricu (int n) {
    int brojac = 1;
    int gornjaGranica = 0;
    int donjaGranica = n - 1;
    int desnaGranica = n - 1;
    int lijevaGranica = 0;

    Matrica spiralizovanaMatrica(n, vector<int>(n));

    while (gornjaGranica <= donjaGranica && lijevaGranica <= desnaGranica) {
        for (int i = lijevaGranica; i <= desnaGranica; ++i) {
            spiralizovanaMatrica.at(gornjaGranica).at(i) = brojac++;
        }
        gornjaGranica++;

        for (int i = gornjaGranica; i <= donjaGranica; ++i) {
            spiralizovanaMatrica.at(i).at(desnaGranica) = brojac++;
        }
        desnaGranica--;

        if (gornjaGranica <= donjaGranica) {
            for (int i = desnaGranica; i >= lijevaGranica; --i) {
                spiralizovanaMatrica.at(donjaGranica).at(i) = brojac++;
            }
            donjaGranica--;
        }

        if (lijevaGranica <= desnaGranica) {
            for (int i = donjaGranica; i >= gornjaGranica; --i) {
                spiralizovanaMatrica.at(i).at(lijevaGranica) = brojac++;
            }
            lijevaGranica++;
        }
    }
    return spiralizovanaMatrica;
}

void ispisiMatricu (Matrica m) {
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[0].size(); j++) {
            cout << setw(5) << m.at(i).at(j);
        }
        cout << endl;
    }
}

int main() {
    cout << "Unesite parametar: ";
    int n;
    cin >> n;
    cout << "Vasa spiralizovana kvadratna matrica:\n";
    ispisiMatricu(spiralizujMatricu(n));
}
