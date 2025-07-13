#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::vector;

template<typename tip>
int vratiBrojLokalnihMaksimuma (const vector<tip>& v, int brojElemenata) {
    int brojacMaksimuma = 0;
    for (int i = 1; i < brojElemenata - 1; i++) {
        if ((v[i] > v[i-1]) && (v[i] > v[i+1])) {
            brojacMaksimuma++;
        }
    }

    return brojacMaksimuma;
}

int main() {
    vector<int> mojVektor = {3, 4, 2, 5, 3};
    auto brojMaksimuma = vratiBrojLokalnihMaksimuma(mojVektor, 5);

    cout << "Broj lokalnih maksimuma je: " << brojMaksimuma;
}