#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;

void razdvojiCifreISmjestiIhKaoParneINeparne (int n, int& parneCifre, int& neparneCifre) {
    int broj = std::abs(n);
    parneCifre = 0;
    neparneCifre = 0;
    int najveciStepen = 1;

    if (broj == 0) {
        parneCifre = 0;
        return;
    }

    while (najveciStepen <= (broj / 10)) {
        najveciStepen *= 10;
    }

    while (najveciStepen > 0) {
        int cifra = broj / najveciStepen;
        if (cifra % 2 == 0) {
            parneCifre = parneCifre * 10 + cifra;
        } else {
            neparneCifre = neparneCifre * 10 + cifra;
        }
        broj = broj % najveciStepen;
        najveciStepen /= 10;
    }
}


int main () {
    cout << "Unesite broj: ";
    int n;
    cin >> n;

    int parneCifre;
    int neparneCifre;

    razdvojiCifreISmjestiIhKaoParneINeparne(n, parneCifre, neparneCifre);
    cout << "Parne cifre: " << parneCifre << endl;
    cout << "Neparne cifre: " << neparneCifre << endl;


    return 0;
}