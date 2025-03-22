#include <iostream>
#include <vector>
using std::cin, std::cout, std::vector, std::endl;

vector<bool>provjeriImaLiUzastopnihPetStoSeMnoze(vector<int>v) {
    vector<bool>rezultat;
    for (int i = 0; i < v.size(); i++) {
        int broj = v[i];
        if (broj>=120){ //najmanji moguci slucaj 1*2*3*4*5
            for (int j = 1; j * (j+1)* (j+2)* (j+3)* (j+4) <= broj; j++) {
                if ((j * (j+1)* (j+2)* (j+3)* (j+4) == broj)) {
                    rezultat.push_back(true);
                    break;
                }
            }
        } else {
            rezultat.push_back(false);
        }
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
    auto rezultat = provjeriImaLiUzastopnihPetStoSeMnoze(v);
    for (int i = 0; i < rezultat.size(); i++) {
        cout << std::boolalpha << rezultat[i];
    }
}