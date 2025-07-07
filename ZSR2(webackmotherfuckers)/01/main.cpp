#include <iostream>
#include <vector>
using std::vector, std::cin, std::cout, std::endl;

bool daLiJeSimetrican(int x) {
    int z = x;
    if (z < 0) return false;
    int obrnuteCifre = 0;

    while (z != 0) {
        int cifra = z % 10;
        obrnuteCifre = obrnuteCifre * 10 + cifra;
        z /= 10;
    }

return x == obrnuteCifre;

}

int main () {
    int x;
    while (true) {
        cout << "Unesite broj (0 oznachava kraj programa): ";
        cin >> x;
        if (x == 0) {
            cout << "Program zavrsava, unijeli ste 0.\n";
            break;
        }
        if (daLiJeSimetrican(x)) {
            cout << "Broj je simetrican.\n";
        } else cout << "Broj nije simetrican.\n";
    }
}
