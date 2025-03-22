#include <iostream>
#include <vector>
using std::cin, std::cout, std::vector, std::endl;

vector<int>provjeriJeLiBrojSavrsen(vector<int>v) {
    vector<int> rezultat;
    for(int i = 0; i < v.size(); i++) {
        int broj = v[i];
        int sumaCifara = 0;
        for (int j = 1; j < broj; j++) {
            if (broj % j == 0) {
                sumaCifara += j;
            }
        }
        if (sumaCifara == broj) {
            rezultat.push_back(broj);
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
    auto rezultat = provjeriJeLiBrojSavrsen(v);
    for (int i = 0; i < rezultat.size(); i++) {
        cout << rezultat[i] << " ";
    }
}