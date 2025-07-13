#include <vector>
#include <new>
#include <iostream>
#include <stdexcept>
using std::cout, std::vector, std::bad_alloc, std::cin, std::endl;

bool jeLiProst(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int* dajPrvihNProstihBrojva(int n) {
    if (n <= 0) throw std::domain_error("Broj mora biti pozitivan!");

    int* nizProstih = nullptr;
    try {
        nizProstih = new int[n];
    } catch (bad_alloc &e) {
        cout << "Alokacija memorije nije uspjela!" << endl;
        throw;
    }

    int brojPronadjenih = 0;
    int trenutniBroj = 2;

    while(brojPronadjenih < n) {
        if (jeLiProst(trenutniBroj)) {
            nizProstih[brojPronadjenih] = trenutniBroj;
            brojPronadjenih++;
        }
        trenutniBroj++;
    }
return nizProstih;
}


int main() {
    cout << "Unesite parametar: ";
    int param;
    cin >> param;

    int* nizProstih = nullptr;

    try {
        nizProstih = dajPrvihNProstihBrojva(param);
        for (int i = 0; i < param; i++) {
            cout << nizProstih[i] << " ";
        }

    } catch (std::domain_error &e) {
        cout << "ERROR: " << e.what();
    } catch (bad_alloc &e) {
        cout << "ERROR: " << e.what();
    } catch (...) {
        cout << "ERROR: NEPOZNATA GRESKA!";
    }

    if (nizProstih != nullptr) {
        delete[] nizProstih;
        nizProstih = nullptr;
    }

    return 0;
}