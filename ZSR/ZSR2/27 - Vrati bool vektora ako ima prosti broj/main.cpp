#include <iostream>
#include <vector>
using std::cin, std::cout, std::vector, std::endl;

vector<bool>provjeriImaLiProstihBrojeva(vector<int>v) {
    vector<bool>rezultat;
    for(int i = 0; i < v.size(); i++) {
        if (v[i] < 2) rezultat.push_back(false);
        bool jeProst = true;
        for (int j = 2; j * j <= v[i]; j++) {
            if (v[i] % j == 0) {
                jeProst = false;
                break;
            }
        }
        rezultat.push_back(jeProst);
    }
    return rezultat;
}

int main() {
    cout << "Unesite granice vektora: ";
    int granicaVektora;
    cin >> granicaVektora;

    vector<int>v;
    for (int i = 0; i < granicaVektora; i++) {
        cout << "Unesite element: ";
        int element;
        cin >> element;
        v.push_back(element);
    }
    auto rezultat = provjeriImaLiProstihBrojeva(v);
    for (int i = 0; i < rezultat.size(); i++) {
        cout << rezultat[i];
    }
}