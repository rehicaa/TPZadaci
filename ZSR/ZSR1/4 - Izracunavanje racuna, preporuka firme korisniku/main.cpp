#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    cout << "Unesite broj sati koji planirate potrositi: " << endl;

    double potroseniSati;
    cin >> potroseniSati;

    double racunFirme1 = 10 + 0.50 * potroseniSati;
    double racunFirme2 = 0.80 * potroseniSati;

    if (racunFirme1 < racunFirme2) {
        cout << "Racun firme 1 je isplativiji odabir za vas: " << racunFirme1 << " u odnosu na racun firme 2: " << racunFirme2 << endl;
    }
    else {
        cout << "Racun firme 2 je isplativiji odabir za vas: " << racunFirme2 << " u odnosu na racun firme 1: " << racunFirme1 << endl;
    }
}