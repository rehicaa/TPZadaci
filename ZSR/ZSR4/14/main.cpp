#include <iostream>
#include <vector>
#include <stdexcept>

using std::cout, std::cin, std::endl, std::vector;

void smjestiBrojParnihINeparnihUParametreFunkcije (const vector<int>&v, int &a, int &b) {
    a = 0;
    b = 0;

    for(int i = 0; i < v.size(); i++) {
        int element = v[i];
        int brojac = 0;
        if (element < 0) throw std::range_error("Element vektora ne smije biti negativan!");

        while (element != 0) {
                element /= 10;
                brojac++;
            }

        if (brojac % 2 == 0){
            a++;
        } else b++;
    }
}

int main () {
    try {
        cout<< "Unesite broj elemenata vektora: ";
        int granica;
        cin >> granica;

        vector<int>vBrojeva;

        for (int i = 0; i < granica; i++) {
            cout << "Unesite element vektora: ";
            int element;
            cin >> element;
            vBrojeva.push_back(element);
        }

        int brojParnih;
        int brojNeparnih;

        smjestiBrojParnihINeparnihUParametreFunkcije(vBrojeva, brojParnih, brojNeparnih);
        cout << "Broj elemenata sa parnim brojem cifara: " << brojParnih << endl;
        cout << "Broj elemenata sa neparnim brojem cifara: " << brojNeparnih << endl;
    }

    catch (std::range_error &e) {
        cout << "GRESKA: " << e.what() << endl;
    }

    return 0;
}