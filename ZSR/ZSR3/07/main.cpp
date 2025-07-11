#include <iomanip>
#include <iostream>
#include <vector>
#include <stdexcept>
using std::vector, std::cout, std::cin, std::end;

double izracunajIzraz (const vector<double>& vektorElemenata) {
    if (vektorElemenata.empty()) throw std::domain_error("Vektor je prazan!");

    double rezultat = 0.0;
    double sumaNazivnika = 0.0;

    for (int i = 0; i < vektorElemenata.size(); i++) {
        sumaNazivnika += vektorElemenata[i];
        if (sumaNazivnika == 0) throw std::domain_error("Ne smije se dijeliti sa nulom!");
        rezultat += 1. / sumaNazivnika;
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
        double rezultat = izracunajIzraz(rezultatniVektor);
        cout << "Rezultat izraza je : " << std::fixed <<std::setprecision(3) << rezultat;
    }

    catch (std::domain_error& e) {
        cout << "GRESKA: " << e.what();
    }

    return 0;
}