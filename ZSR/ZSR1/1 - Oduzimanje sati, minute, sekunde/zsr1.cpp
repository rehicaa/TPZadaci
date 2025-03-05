#include <iostream>
using namespace std;

// Funkcija koja računa stepen za cijele brojeve
double stepen(int x, int n) {
    // Ako je eksponent 0, bilo koji broj na 0 je 1
    if (n == 0) {
        return 1;
    }

    // Ako je eksponent pozitivan, samo množimo x sa samim sobom n puta
    double rezultat = 1;
    if (n > 0) {
        for (int i = 1; i <= n; ++i) {
            rezultat *= x;
        }
    }
    // Ako je eksponent negativan, koristimo pravilo za negativni eksponent
    else {
        for (int i = 1; i <= -n; ++i) {
            rezultat *= x;
        }
        rezultat = 1 / rezultat;  // Inverzija za negativni eksponent
    }

    return rezultat;
}

int main() {
    int x, n;

    // Unos broja i eksponenta
    cout << "Unesite osnovu (x): ";
    cin >> x;
    cout << "Unesite eksponent (n): ";
    cin >> n;

    // Ispis rezultata
    cout << "Rezultat: " << stepen(x, n) << endl;

    return 0;
}
