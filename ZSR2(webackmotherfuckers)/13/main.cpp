#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;

bool provjeriImaLiElemenataStepenaBrojaDva(vector<int>nizBrojeva) {
    for (int i = 0; i < nizBrojeva.size(); i++) {
        int trenutniBroj = nizBrojeva[i];
        if (trenutniBroj <= 0) {
            continue;
        }
        while (trenutniBroj % 2 == 0) {
            trenutniBroj /= 2;
        }
        if (trenutniBroj == 1) return true;
    }

    return false;
}

int main() {
    cout << "Unesite granice niza: ";
    int n;
    cin >> n;
    vector<int>niz;

    for (int i = 0; i < n; i++) {
        cout << "Unesite element: ";
        int x;
        cin >> x;
        niz.push_back(x);
    }

    if (provjeriImaLiElemenataStepenaBrojaDva(niz)) {
        cout << "Ima elemenata stepena broja dva.";
    } else cout << "Nema elemenata stepena broja dva.";

    return 0;
}