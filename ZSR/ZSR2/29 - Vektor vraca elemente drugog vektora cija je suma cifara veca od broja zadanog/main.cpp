#include <iostream>
#include <vector>
using std::cin, std::cout, std::vector, std::endl;

vector<int>vratiElementZbiraCifraraVeciOdParametra(vector<int>v, int n) {
    vector<int>rezultat;
    for (int i = 0; i < v.size(); i++) {
        int broj = v[i];
        int sumaCifra = 0;
        while (broj != 0) {
            int cifra = broj % 10;
            broj /= 10;
            sumaCifra += cifra;
        }
        if (sumaCifra > n) {
            rezultat.push_back(v[i]);
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
        cout<< "Unesite element: ";
        int element;
        cin >> element;
        v.push_back(element);
    }

    vector<int>rezultat = vratiElementZbiraCifraraVeciOdParametra(v, 10);
    for(int i = 0; i < rezultat.size(); i++) {
        cout << rezultat[i] << " ";
    }
}