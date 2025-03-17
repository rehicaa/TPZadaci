#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;
vector<int>vratiZbirCifaraElemenataVektora(vector<int>x) {
    vector<int>rezultat;
    for (int i = 0; i < x.size(); i++) {
        int brojac = 0;
        int sumaCifara = 0;
        int a = x[i];
        while (a != 0) {
            int cifra = a % 10;
            a /= 10;
            brojac++;
            sumaCifara += cifra;
        }
        rezultat.push_back(sumaCifara);
    }
    return rezultat;
}

int main() {
cout << "Unesite granice vektora: ";
    int granicaVektora;
    cin >> granicaVektora;

    vector<int>x;
    for (int i = 0; i < granicaVektora; i++) {
        cout << "Unesite element: ";
        int element;
        cin >> element;
        x.push_back(element);
    }
    x = vratiZbirCifaraElemenataVektora(x);
    for (int i = 0; i < x.size(); i++) {
        cout << x[i] << " ";
    }
}
