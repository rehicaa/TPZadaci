#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;
vector<double> kreirajVektorIPrepisiElementeIzNiza (double niz[], int n) {
    vector<double>finalniVektor;
    for (int i = n - 1; i >= 0; i--) {
        finalniVektor.push_back(niz[i]);
    }
    return finalniVektor;
}

int main() {
    double niz[10];
    for (int i = 0; i < 10; i++) {
        cout << "Unesite element: ";
        cin >> niz[i];
    }

    auto obrnutiNiz = kreirajVektorIPrepisiElementeIzNiza(niz, 10);

    for (int i = 0; i < obrnutiNiz.size(); i++) {
        cout<< obrnutiNiz[i] << " ";
    }
}