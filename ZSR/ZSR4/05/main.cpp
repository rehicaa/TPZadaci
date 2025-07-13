#include <iostream>

using std::cout, std::cin, std::endl;
void izracunajSumuParnihINeparnihIzParameta (int n, int &s_par, int &s_nepar) {
    s_par = 0;
    s_nepar = 0;

    int broj = n;
    while (broj != 0) {
        int cifra = broj % 10;
        if (cifra % 2 == 0) {
            s_par += cifra;
        } else s_nepar += cifra;
        broj /= 10;
    }
}

int main(){
    while (true) {
        cout << "Unesite broj: ";
        int broj;
        cin >> broj;
        if (broj == 0) {
            cout << "Unijeli ste 0 za kraj programa";
            break;
        }
        int sumaParnih, sumaNeparnih;
        izracunajSumuParnihINeparnihIzParameta(broj, sumaParnih, sumaNeparnih);
        cout << "Suma parnih: " << sumaParnih << endl;
        cout << "Suma neparnih: " << sumaNeparnih << endl;

    }
        return 0;
}