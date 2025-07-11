#include <iostream>
#include <vector>
#include <stdexcept>
using std::vector, std::cout, std::cin, std::end;

double izracunajIzraz (const vector<double>& vektorElemenata) {
    if (vektorElemenata.empty()) throw std::domain_error("Vektor je prazan!");
    double rezultat = vektorElemenata.back();
    for (int i = static_cast<int>(vektorElemenata.size()) - 2; i >= 0; i--) {
        rezultat = vektorElemenata.at(i) + (1. / rezultat);
    }

    return rezultat;
}

int main() {
    try {
    cout << "Unesite granice vektora: ";
    int n;
    cin >> n;

    vector<double> rezultatniVektor;

    for (int i = 0; i < n; i++) {
        cout << "Unesite element: ";
        double x;
        cin >> x;
        rezultatniVektor.push_back(x);
    }
        cout << izracunajIzraz(rezultatniVektor);
    }

    catch (std::domain_error& e) {
        cout << "GRESKA: " << e.what();
    }

    return 0;
}