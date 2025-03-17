#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

bool provjeriDaLiJeBrojSimetrican(int x) {
    int a = x;
    int zadnjaCifra;
    vector<int> reversedCifreBroja;

    while (a != 0) {
        zadnjaCifra = a % 10;
        a = a / 10;
        reversedCifreBroja.push_back(zadnjaCifra);
    }

    vector<int> cifreBroja;
    for (int i = reversedCifreBroja.size() - 1; i >= 0; i--) {
        cifreBroja.push_back(reversedCifreBroja[i]);
    }

    if (reversedCifreBroja == cifreBroja) {
        return true;
    }
    return false;
}

int main () {
    int x;
    while (1) {
        cout << "Unesite broj: ";
        cin >> x;

        if (x == 0) {
            cout << "Unijeli ste nulu za kraj programa." << endl;
            break;
        }
        
        if (provjeriDaLiJeBrojSimetrican(x)) {
            cout << "Broj je simetrican." << endl;

        } else cout << "Broj nije simetrican." << endl;

    }
}