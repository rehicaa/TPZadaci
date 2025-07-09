#include <iostream>
#include <vector>
#include <cmath>
using std::cout, std::cin, std::endl, std::vector;
vector<int>uvecajParneCifreZaJedanUmanjiNeparneCifreZaJedan(vector<int>vektorBrojeva) {
    vector<int>finalniVektor;
    for (int element:vektorBrojeva) {

        int toThePowerOf = 1;
        bool jeNegativan = element < 0;
        int broj = std::abs(element);
        int noviBroj = 0;

        while (broj != 0) {
            int cifra = broj % 10;
            if (cifra % 2 == 0) {
                cifra++;
            } else cifra--;
            noviBroj += cifra * toThePowerOf;
            toThePowerOf *= 10;
            broj /= 10;
        }
        if (jeNegativan) {
            noviBroj *= -1;
        }
        finalniVektor.push_back(noviBroj);
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

    auto rezultatniVektor = uvecajParneCifreZaJedanUmanjiNeparneCifreZaJedan(inicijalniVektor);

    for (int element:rezultatniVektor) {
        cout << element << " ";
    }
}