#include <iostream>
#include <vector>
#include <cmath>
#include <pstl/execution_defs.h>
using std::cout, std::cin, std::endl, std::vector, std::log;

vector<int>vratiParnePaNeparne(int niz[], int z) {
    vector<int> parniBrojevi, neparniBrojevi;

    for (int i = 0; i < z; i++) {
        if (niz[i] % 2 == 0) {
            parniBrojevi.push_back(niz[i]);
        } else neparniBrojevi.push_back(niz[i]);
    }
    vector<int>rezultat = parniBrojevi;
    rezultat.insert(rezultat.end(), neparniBrojevi.begin(), neparniBrojevi.end());

    return rezultat;
}

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        cout << "Unesite element: ";
        cin >> a[i];
    }


    auto x= vratiParnePaNeparne(a, 10);
    for (int i = 0; i < x.size(); i++){
        cout << x[i] << " ";
    }
}
