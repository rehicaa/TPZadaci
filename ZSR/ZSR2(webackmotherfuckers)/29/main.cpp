#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;
vector<int>vratiElementeCijiJeZbirCifaraVeciOdParametra(vector<int>vektorBrojeva, int n) {
    vector<int>finalniVektor;
    for (int element:vektorBrojeva) {
        int suma = 0;
        int broj = element;
        while (broj != 0) {
            int cifra = broj % 10;
            suma += cifra;
            broj /= 10;
        }
        if (suma > n) {
            finalniVektor.push_back(element);
        }
    }

    return finalniVektor;
}

int main() {

    cout << "Unesite granice vektora: ";
    int n;
    cin >> n;
    vector<int>inicijalniVektor;

    for (int i = 0; i < n; i++) {
        cout << "Unesite element: ";
        int x;
        cin >> x;
        inicijalniVektor.push_back(x);
    }

    auto vektorCijiJeZbirCifaraVeciOdParametra = vratiElementeCijiJeZbirCifaraVeciOdParametra(inicijalniVektor, 7);

    for (int element:vektorCijiJeZbirCifaraVeciOdParametra) {
        cout << element << " ";
    }
}